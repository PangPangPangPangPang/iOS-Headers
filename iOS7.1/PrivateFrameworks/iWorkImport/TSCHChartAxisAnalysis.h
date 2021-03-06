//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisAnalysis : NSObject
{
    long long _retainCount;
    NSArray *_majorGridLocations;
    NSArray *_minorGridLocations;
    NSArray *_totals;
    double _min;
    double _max;
    double _modelMin;
    double _modelMax;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *totals; // @synthesize totals=_totals;
@property(copy, nonatomic) NSArray *minorGridLocations; // @synthesize minorGridLocations=_minorGridLocations;
@property(copy, nonatomic) NSArray *majorGridLocations; // @synthesize majorGridLocations=_majorGridLocations;
@property(nonatomic) double modelMax; // @synthesize modelMax=_modelMax;
@property(nonatomic) double modelMin; // @synthesize modelMin=_modelMin;
@property(nonatomic) double max; // @synthesize max=_max;
@property(nonatomic) double min; // @synthesize min=_min;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;

@end

