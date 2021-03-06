/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Message/MFOfflineCacheOperation.h>

#import "MFDAOfflineCacheOperation-Protocol.h"

@class NSString;

@interface _MFDADeferredSetFlagsOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation>
{
    unsigned long long _onFlags;
    unsigned long long _offFlags;
    NSString *_messageID;
}

- (id)description;
- (BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetFlagsRequest:(id)arg1;

@end

