//
//  main.m
//  type
//
//  Created by sonnet on 13. 2. 1..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <stdio.h>

@interface A : NSObject
-(void) whoAreYou;
@end

@implementation A
-(void)whoAreYou { printf("I'm A\n"); }
@end

@interface B : A // subclass of A
-(void)whoAreYou;
-(void)sayHello;
@end

@implementation B
-(void)whoAreYou { printf("I'm B\n"); }
-(void)sayHello  { printf("Hello\n"); }
@end

@interface C : NSObject
-(void)printName;
@end

@implementation C
-(void) printName { printf("I'm C\n"); }
@end

int main()
{
    A *a, *b;
    //C *c;
    id c;               // p.116 바꿔서 타이핑 해 봅시다. id 타입은 어떠한 메소드 호출도 기술할 수 있어요. 컴파일 타임에 상관없이. (* void)같은 느낌.
    
    a = [[A alloc] init];
    b = [[B alloc] init];
    c = [[C alloc] init];
    [a whoAreYou];
//  [b whoAreYou];
//  [b sayHello];       // p.117 어? 얘는 B에 있는데 왜 에러가 나지? 대답: A에 있고, b로 alloc했어.
    [(B*) b sayHello];  // p.117 type casting으로 에러가 안날 수 있게 할 수 있다.
    [(B*) a whoAreYou]; // p.117 I am A 가 나오는 이유? 메소드가 캐스팅에 의해 정적으로 정해지지 않는다?
//  [c whoAreYou];      //       wrong implementation 'because c's whoareyou doesnot exist!'
    [c printName];      // p.116 method가 있는 녀석으로 실행해 봅시다.
    
    return 0;
}

