/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UISlider.h"

@class UIColor;

@interface PSDiscreteSlider : UISlider
{
    UIColor *_trackMarkersColor;
}

@property(retain, nonatomic) UIColor *trackMarkersColor; // @synthesize trackMarkersColor=_trackMarkersColor;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)sliderTapped:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
