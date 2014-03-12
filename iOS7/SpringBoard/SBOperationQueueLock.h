/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SBOperationQueue;

@interface SBOperationQueueLock : NSObject
{
    SBOperationQueue *_queue;
    NSString *_reason;
    _Bool _released;
}

@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void)_releaseIfNecessary;
- (void)releaseLock;
- (void)dealloc;
- (id)initWithReason:(id)arg1 operationQueue:(id)arg2;

@end
