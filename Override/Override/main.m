//
//  main.m
//  Override
//
//  Created by sonnet on 13. 1. 31..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <stdio.h>

@interface A : NSObject
- (void) method1;
- (void) method2;
@end

@implementation A
- (void) method1 { printf("method1 of class A\n"); }
- (void) method2 { printf("method2 of class A\n"); }
@end

// implementation b : A를 상속받음

@interface B : A
- (void) method2;
@end

@implementation B
- (void) method2 {
    printf("method2 of class B\n");
    printf("self -->");
    [self method1];
    printf("super-->");
    [super method2];
}
@end

// impementation c : B를 상속받음

@interface C : B
- (void) method1;
@end

@implementation C
- (void) method1 { printf("method 1 of class C\n"); }
@end

int main(void)
{

    id x = [[B alloc] init]; // b의 instance 를 할당받음
    id y = [[C alloc] init];
    printf("--- instance of B ---\n");
    [x method1]; // b 의 m1을 수행 , 없으므로 a로 빠짐
    [x method2]; // b 의 m2를 수행 , 있어서 수행하고, 셀프는 a, super도 a
    
    printf("--- instance of C ---\n");
    [y method1]; // b의 method 1를 재정의함.
    [y method2]; // b를 수행. 여기서 self 는 c. super는 mother class
    
    return 0;
}

