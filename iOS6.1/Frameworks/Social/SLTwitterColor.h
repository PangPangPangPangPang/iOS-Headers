/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SLTwitterColor : NSObject
{
    struct CGColor *_colorRef;
}

+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)whiteColor;
+ (id)grayColor;
+ (id)clearColor;
- (void)setCGColor:(struct CGColor *)arg1;
- (struct CGColor *)CGColor;
- (void)setOnContext:(struct CGContext *)arg1;
- (void)dealloc;

@end
