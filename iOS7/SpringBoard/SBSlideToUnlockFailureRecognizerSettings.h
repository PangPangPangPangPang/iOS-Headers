/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UISettings.h"

@interface SBSlideToUnlockFailureRecognizerSettings : _UISettings
{
    _Bool _enabled;
    _Bool _viewDebugArea;
    unsigned long long _maxAllowableVerticalOffset;
    double _topAngle;
    double _bottomAngle;
}

+ (id)settingsControllerModule;
@property(nonatomic) double bottomAngle; // @synthesize bottomAngle=_bottomAngle;
@property(nonatomic) double topAngle; // @synthesize topAngle=_topAngle;
@property(nonatomic) unsigned long long maxAllowableVerticalOffset; // @synthesize maxAllowableVerticalOffset=_maxAllowableVerticalOffset;
@property(nonatomic) _Bool viewDebugArea; // @synthesize viewDebugArea=_viewDebugArea;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setDefaultValues;

@end

