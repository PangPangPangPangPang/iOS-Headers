/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBUIBannerItem.h"

#import "SBDefaultBannerViewSource-Protocol.h"

@class BBBulletin, BBObserver, NSArray, SBUISound, UIImage;

@interface SBBulletinBannerItem : SBUIBannerItem <SBDefaultBannerViewSource>
{
    BBBulletin *_seedBulletin;
    BBObserver *_observer;
    NSArray *_additionalBulletins;
    UIImage *_iconImage;
    SBUISound *_sound;
}

+ (id)itemWithSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 andObserver:(id)arg3;
+ (id)itemWithBulletin:(id)arg1 andObserver:(id)arg2;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
- (_Bool)isVIP;
- (id)attachmentImage;
- (id)attachmentText;
- (id)iconImage;
- (id)sourceDate;
- (id)message;
- (id)title;
- (id)pullDownNotification;
- (_Bool)canShowInAssistant;
- (id)sortDate;
- (id)seedBulletin;
- (id)action;
- (id)sound;
- (void)_setSound;
- (unsigned long long)accessoryStyle;
- (id)_appName;
- (id)additionalBulletins;
- (void)dealloc;
- (id)_initWithSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 andObserver:(id)arg3;

@end

