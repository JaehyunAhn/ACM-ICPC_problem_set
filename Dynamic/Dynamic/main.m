//
//  main.m
//  Dynamic
//
//  Created by sonnet on 13. 1. 31..
//  Copyright (c) 2013년 sonnet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <stdio.h>

@interface A : NSObject
- (void) whoAreYou;
@end

@implementation A
- (void) whoAreYou { printf("I am A\n"); }
@end

@interface B : NSObject
- (void) whoAreYou;
@end

@implementation B
- (void) whoAreYou { printf("I am B\n"); }
@end

int main(void)
{
    id obj;
    int n;
    
    scanf("%d", &n);
    switch (n)
    {
        case 0: obj = [[A alloc] init]; break;
        case 1: obj = [[B alloc] init]; break;
        case 2: obj = [[NSObject alloc] init]; break;
    }
    [obj whoAreYou];
    return 0;
}

