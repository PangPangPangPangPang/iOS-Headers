/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSUStreamReadChannel-Protocol.h"

@class NSObject<OS_dispatch_queue>, TSUZipEntry;

// Not exported
@interface TSUZipReadChannel : NSObject <TSUStreamReadChannel>
{
    TSUZipEntry *_entry;
    id <TSUReadChannel> _archiveReadChannel;
    NSObject<OS_dispatch_queue> *_readQueue;
}

- (void).cxx_destruct;
- (void)close;
- (void)handleFailureWithQueue:(id)arg1 handler:(id)arg2 error:(void)arg3;
- (void)processData:(id)arg1 isDone:(_Bool)arg2 queue:(id)arg3 handler:(id)arg4;
- (void)readWithHeaderLength:(unsigned long long)arg1 queue:(id)arg2 handler:(id)arg3;
- (_Bool)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long *)arg2;
- (void)readWithQueue:(id)arg1 handler:(id)arg2;
- (id)initWithEntry:(id)arg1 archiveReadChannel:(id)arg2;

@end

