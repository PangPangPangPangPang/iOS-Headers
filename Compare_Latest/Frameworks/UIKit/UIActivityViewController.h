/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSOperationQueue, NSString, UIActivity, UIActivityListViewController;

@interface UIActivityViewController : UIViewController
{
    Class _originalPopoverBackgroundViewClass;
    UIActivity *_activity;
    UIActivityListViewController *_activityListViewController;
    unsigned int _backgroundTaskIdentifier;
    NSString *_subject;
    id _completionHandler;
    int _originalPopoverBackgroundStyle;
    int _totalProviderCount;
    NSArray *_excludedActivityTypes;
    int _completedProviderCount;
    NSArray *_applicationActivities;
    NSOperationQueue *_activityItemProviderOperationQueue;
    BOOL _useBlackPopoverStyle;
    NSArray *_activityItems;
}

+ (BOOL)_hasSystemActivityForActivityItems:(id)arg1;
+ (id)_builtinActivities;
@property(copy, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(nonatomic) BOOL useBlackPopoverStyle; // @synthesize useBlackPopoverStyle=_useBlackPopoverStyle;
@property(retain, nonatomic) NSOperationQueue *activityItemProviderOperationQueue; // @synthesize activityItemProviderOperationQueue=_activityItemProviderOperationQueue;
@property(copy, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(nonatomic) int completedProviderCount; // @synthesize completedProviderCount=_completedProviderCount;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(nonatomic) int totalProviderCount; // @synthesize totalProviderCount=_totalProviderCount;
@property(nonatomic) int originalPopoverBackgroundStyle; // @synthesize originalPopoverBackgroundStyle=_originalPopoverBackgroundStyle;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) unsigned int backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(retain, nonatomic) UIActivityListViewController *activityListViewController; // @synthesize activityListViewController=_activityListViewController;
@property(retain, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) Class originalPopoverBackgroundViewClass; // @synthesize originalPopoverBackgroundViewClass=_originalPopoverBackgroundViewClass;
- (void)_cancel;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (void)_reloadImageForActivity:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)_executeActivity;
- (void)_cleanupActivityWithSuccess:(BOOL)arg1;
- (void)_hideView;
- (struct CGSize)contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)_availableActivities;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (id)_activityItemValues;
- (void)dealloc;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;

@end
