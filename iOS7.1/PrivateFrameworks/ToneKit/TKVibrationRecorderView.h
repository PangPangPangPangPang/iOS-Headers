//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TKVibrationRecorderTouchSurfaceDelegate.h"

@class NSLayoutConstraint, TKVibrationRecorderProgressView, TKVibrationRecorderTouchSurface, UILabel, UIToolbar;

@interface TKVibrationRecorderView : UIView <TKVibrationRecorderTouchSurfaceDelegate>
{
    BOOL _replayModeEnabled;
    BOOL _waitingForEndOfCurrentVibrationComponent;
    BOOL _animatingProgress;
    id <TKVibrationRecorderViewDelegate> _delegate;
    id <TKVibrationRecorderStyleProvider> _styleProvider;
    UILabel *_instructionsLabel;
    UIToolbar *_controlsToolbar;
    TKVibrationRecorderProgressView *_progressView;
    TKVibrationRecorderTouchSurface *_touchSurface;
    NSLayoutConstraint *_controlsToolbarTopConstraint;
    NSLayoutConstraint *_progressToolbarBottomConstraint;
    NSLayoutConstraint *_touchSurfaceTopConstraint;
    int _leftButtonIdentifier;
    int _rightButtonIdentifier;
    double _vibrationPatternMaximumDuration;
    double _currentVibrationProgressDidStartTimestamp;
    double _currentVibrationComponentDidStartTimestamp;
}

@property(nonatomic, getter=_isAnimatingProgress, setter=_setAnimatingProgress:) BOOL _animatingProgress; // @synthesize _animatingProgress;
@property(nonatomic, getter=_isWaitingForEndOfCurrentVibrationComponent, setter=_setWaitingForEndOfCurrentVibrationComponent:) BOOL _waitingForEndOfCurrentVibrationComponent; // @synthesize _waitingForEndOfCurrentVibrationComponent;
@property(nonatomic, setter=_setCurrentVibrationComponentDidStartTimestamp:) double _currentVibrationComponentDidStartTimestamp; // @synthesize _currentVibrationComponentDidStartTimestamp;
@property(nonatomic, setter=_setCurrentVibrationProgressDidStartTimestamp:) double _currentVibrationProgressDidStartTimestamp; // @synthesize _currentVibrationProgressDidStartTimestamp;
@property(nonatomic, setter=_setVibrationPatternMaximumDuration:) double _vibrationPatternMaximumDuration; // @synthesize _vibrationPatternMaximumDuration;
@property(nonatomic, getter=_isReplayModeEnabled, setter=_setReplayModeEnabled:) BOOL _replayModeEnabled; // @synthesize _replayModeEnabled;
@property(nonatomic, setter=_setRightButtonIdentifier:) int _rightButtonIdentifier; // @synthesize _rightButtonIdentifier;
@property(nonatomic, setter=_setLeftButtonIdentifier:) int _leftButtonIdentifier; // @synthesize _leftButtonIdentifier;
@property(retain, nonatomic, setter=_setTouchSurfaceTopConstraint:) NSLayoutConstraint *_touchSurfaceTopConstraint; // @synthesize _touchSurfaceTopConstraint;
@property(retain, nonatomic, setter=_setProgressToolbarBottomConstraint:) NSLayoutConstraint *_progressToolbarBottomConstraint; // @synthesize _progressToolbarBottomConstraint;
@property(retain, nonatomic, setter=_setControlsToolbarTopConstraint:) NSLayoutConstraint *_controlsToolbarTopConstraint; // @synthesize _controlsToolbarTopConstraint;
@property(retain, nonatomic, setter=_setTouchSurface:) TKVibrationRecorderTouchSurface *_touchSurface; // @synthesize _touchSurface;
@property(retain, nonatomic, setter=_setProgressView:) TKVibrationRecorderProgressView *_progressView; // @synthesize _progressView;
@property(retain, nonatomic, setter=_setControlsToolbar:) UIToolbar *_controlsToolbar; // @synthesize _controlsToolbar;
@property(retain, nonatomic, setter=_setInstructionsLabel:) UILabel *_instructionsLabel; // @synthesize _instructionsLabel;
@property(retain, nonatomic, setter=_setStyleProvider:) id <TKVibrationRecorderStyleProvider> _styleProvider; // @synthesize _styleProvider;
@property(nonatomic) id <TKVibrationRecorderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)vibrationRecorderTouchSurface:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (BOOL)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)arg1;
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)arg1;
- (void)navigationController:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)wasAddedToNavigationController:(id)arg1;
- (void)didMoveToWindow;
- (void)_updateProgress:(id)arg1;
- (void)stopAnimatingProgress;
- (void)startAnimatingProgress;
- (void)exitReplayMode;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (void)exitRecordingModeWithPlayButtonEnabled:(BOOL)arg1;
- (void)enterRecordingMode;
- (void)_exitWaitingModeWithAnimation:(BOOL)arg1;
- (void)_enterWaitingModeWithAnimation:(BOOL)arg1 enablePlayButton:(BOOL)arg2;
- (void)_handleRightButtonTapped:(id)arg1;
- (void)_handleLeftButtonTapped:(id)arg1;
- (void)_setLeftButtonIdentifier:(int)arg1 enabled:(BOOL)arg2 rightButtonIdentifier:(int)arg3 enabled:(BOOL)arg4 animated:(BOOL)arg5;
- (id)_titleForControlsToolbarButtonWithIdentifier:(int)arg1;
- (void)dealloc;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;

@end

