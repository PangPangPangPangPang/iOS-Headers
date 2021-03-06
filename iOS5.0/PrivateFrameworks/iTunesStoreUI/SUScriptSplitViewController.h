/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSNumber, NSString;

@interface SUScriptSplitViewController : SUScriptViewController
{
}

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_splitViewController;
- (BOOL)_usesSharedPlaceholder;
- (void)_setUsesSharedPlaceholder:(BOOL)arg1;
- (void)_setTitle:(id)arg1;
- (void)_setSplitType:(id)arg1;
- (void)_setSplitShadowRadius:(id)arg1;
- (void)_setSplitShadowOpacity:(id)arg1;
- (void)_setSplitShadowColor:(struct CGColor *)arg1;
- (void)_setSplitPosition:(id)arg1;
- (void)_setSecondViewController:(id)arg1;
- (void)_setMinimumPaneSize:(id)arg1;
- (void)_setFirstViewController:(id)arg1;
- (id)_copyTitle;
- (id)_copySplitType;
- (id)_copySplitShadowRadius;
- (id)_copySplitShadowOpacity;
- (id)_copySplitShadowColor;
- (id)_copySplitPosition;
- (id)_copySecondViewController;
- (id)_copyMinimumPaneSize;
- (id)_copyFirstViewController;
@property BOOL usesSharedPlaceholder;
@property(retain) NSString *title;
@property(retain) NSString *splitType;
@property(retain) NSNumber *splitShadowRadius;
@property(retain) NSNumber *splitShadowOpacity;
@property(retain) id splitShadowColor;
@property(retain) id splitPosition;
@property(retain) SUScriptViewController *secondViewController;
@property(retain) id minimumPaneSize;
@property(retain) SUScriptViewController *firstViewController;
- (id)_className;
- (id)newNativeViewController;

@end

