//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCHUnretainedParent.h"

@class NSString, TSCHChartSeries, TSDBezierPath, TSURegressionModel;

__attribute__((visibility("hidden")))
@interface TSCHTrendLineData : NSObject <TSCHUnretainedParent>
{
    TSCHChartSeries *mSeries;
    int mLineType;
    BOOL mShowTrendLine;
    TSURegressionModel *mRegression;
    double mMaxYValue;
    double mMinYValue;
    double mMaxXValue;
    double mMinXValue;
    int mInputAxisType;
    int mOutputAxisType;
    BOOL mTrendLineInvalid;
    TSDBezierPath *mCachedTrendLinePath;
    struct CGRect mCachedChartFrame;
    double mOffsetInBody;
    BOOL mCachedChartVertical;
}

@property(readonly, nonatomic) BOOL showTrendLine; // @synthesize showTrendLine=mShowTrendLine;
- (void)p_releaseCache;
- (id)p_equationStorageWithText:(id)arg1;
- (void)p_updateTrendLineData;
- (void)p_generateRegression;
- (unsigned int)p_fillArrayX:(double *)arg1 andY:(double *)arg2 fromPoints:(id)arg3 hasNegativeX:(char *)arg4;
- (unsigned int)p_fillArrayX:(id)arg1 andY:(id)arg2 fromPoints:(id)arg3;
- (void)p_calcMARegression:(unsigned int)arg1 xData:(id)arg2 yData:(id)arg3;
- (void)p_calcBoundsForMovingAverage;
- (void)p_calcRegression:(unsigned int)arg1 xData:(double *)arg2 yData:(double *)arg3;
- (void)p_calcBounds;
- (id)p_dataPointValues;
- (int)p_getTrendLineType;
- (id)trendLinePathForChartRect:(struct CGRect)arg1 offsetInBody:(double)arg2 vertical:(BOOL)arg3;
- (void)p_addPathToTrendLinePathWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2 curved:(BOOL)arg3 curveFitter:(id)arg4;
- (id)p_linePathFromPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
- (CDStruct_c3b9c2ee)p_unitPoint:(CDStruct_c3b9c2ee)arg1 toScreenFrame:(struct CGRect)arg2 offset:(double)arg3 vertical:(BOOL)arg4;
- (struct __CFAttributedString *)newEquationAttributedString;
- (void)trendLineUnitSpacePoints:(CDStruct_183601bc **)arg1 count:(unsigned int *)arg2 drawCurve:(char *)arg3 maxPoints:(unsigned int)arg4;
- (double)maxValueForAxisID:(id)arg1;
- (double)minValueForAxisID:(id)arg1;
- (void)updateIfNeeded;
- (void)invalidateData;
- (BOOL)showTrendLineForAxisID:(id)arg1;
@property(readonly, nonatomic) float rSquaredTextOpacity;
@property(readonly, nonatomic) float equationTextOpacity;
@property(readonly, nonatomic) NSString *trendLineLegendText;
@property(readonly, nonatomic) NSString *rSquaredText;
@property(readonly, nonatomic) BOOL showRSquared;
@property(readonly, nonatomic) BOOL showEquation;
@property(readonly, nonatomic) BOOL showTrendLineLegendText;
- (void)clearParent;
- (void)dealloc;
- (id)initWithSeries:(id)arg1;

@end

