//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHChartTitleLayoutItem : TSCHChartLayoutItem
{
    float mChartBodyWidth;
    NSString *mEditedString;
    float mMinHitSize;
}

@property(nonatomic) float minHitSize; // @synthesize minHitSize=mMinHitSize;
@property(copy, nonatomic) NSString *editedString; // @synthesize editedString=mEditedString;
@property(nonatomic) float chartBodyWidth; // @synthesize chartBodyWidth=mChartBodyWidth;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct CGAffineTransform)transformForRenderingRange:(struct _NSRange)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (struct CGAffineTransform)transformForRenderingOutElementSize:(struct CGSize *)arg1 outClipRect:(struct CGRect *)arg2;
- (struct CGAffineTransform)p_transformForRenderingRangePtr:(struct _NSRange *)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3;
- (id)renderersWithRep:(id)arg1;
- (struct CGRect)calcOverhangRect;
- (struct CGRect)calcDrawingRect;
- (struct CGSize)calcMinSizeForModel:(id)arg1;
- (struct CGSize)calcMinSize;
- (id)titleText;
- (id)p_titleParagraphStyle;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

