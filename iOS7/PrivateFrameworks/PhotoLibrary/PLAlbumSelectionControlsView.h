/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIButton;

@interface PLAlbumSelectionControlsView : UIView
{
    int _controlsMode;
    UIButton *_rightButton;
    UIButton *_bgButton;
    id _buttonTarget;
    NSString *_buttonAction;
}

@property(nonatomic) int controlsMode; // @synthesize controlsMode=_controlsMode;
- (void)handleButtonAction:(id)arg1;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
