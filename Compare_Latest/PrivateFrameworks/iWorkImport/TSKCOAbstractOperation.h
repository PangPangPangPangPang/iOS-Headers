//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKCOOperation.h"

__attribute__((visibility("hidden")))
@interface TSKCOAbstractOperation : NSObject <TSKCOOperation>
{
    BOOL mNoop;
}

@property(readonly, nonatomic) BOOL isNoop; // @synthesize isNoop=mNoop;
- (void)dealloc;
- (id)initWithNoop:(BOOL)arg1;

@end

