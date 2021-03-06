//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMStepCounterProxy;

@interface CMStepCounter : NSObject
{
    CMStepCounterProxy *_stepcounterProxy;
}

+ (BOOL)isStepCountingAvailable;
@property(readonly, nonatomic) CMStepCounterProxy *stepcounterProxy; // @synthesize stepcounterProxy=_stepcounterProxy;
@property(readonly) BOOL everRequested;
@property BOOL enabled;
- (void)deleteHistory;
- (void)getTotalCountToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopStepCountingUpdates;
- (void)startStepCountingUpdatesToQueue:(id)arg1 updateOn:(int)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)queryStepCountStartingFrom:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

