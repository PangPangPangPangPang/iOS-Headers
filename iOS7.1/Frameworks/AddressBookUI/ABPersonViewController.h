//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AFContextProvider.h"
#import "UIViewControllerRestoration.h"

@class ABPersonTableViewActionsDelegate, ABPersonTableViewDataSource, ABPersonTableViewSharingDelegate, ABPersonViewControllerHelper, ABUIPerson, AFContextManager, NSArray, NSString, NSTimer, UIFont, UIImage, UIView;

@interface ABPersonViewController : UIViewController <AFContextProvider, UIViewControllerRestoration>
{
    id <ABPersonViewControllerDelegate> _personViewDelegate;
    id _helper;
    id _internal;
    BOOL _internal2;
    NSTimer *_editAnimationTimer;
    BOOL _allowsContactBlocking;
    BOOL _allowsOnlyPhoneActions;
    BOOL _allowsOnlyFaceTimeActions;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(nonatomic) BOOL allowsOnlyFaceTimeActions; // @synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions;
@property(nonatomic) BOOL allowsOnlyPhoneActions; // @synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions;
@property(nonatomic) BOOL allowsContactBlocking; // @synthesize allowsContactBlocking=_allowsContactBlocking;
@property(readonly, nonatomic) ABPersonTableViewSharingDelegate *sharingDelegate; // @synthesize sharingDelegate=_sharingDelegate;
@property(readonly, nonatomic) ABPersonTableViewActionsDelegate *actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
@property(readonly, nonatomic) ABPersonTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3 important:(BOOL)arg4;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void *)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
@property(copy, nonatomic) NSArray *displayedProperties;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider;
@property(nonatomic) BOOL badgeEmailPropertiesForMailVIP;
- (void)shareContactByEmail:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType willWeiboLocationCallback;
@property(copy, nonatomic) CDUnknownBlockType willTweetLocationCallback;
@property(retain, nonatomic) UIImage *shareLocationSnapshotImage;
@property(copy, nonatomic) NSString *shareLocationURL;
@property(copy, nonatomic) NSString *shareMessageSubject;
@property(copy, nonatomic) NSString *shareMessageBody;
@property(nonatomic) BOOL shareMessageBodyIsHTML;
- (BOOL)makeFirstFieldBecomeFirstResponder;
- (BOOL)_updateAllDataForExternalChange;
- (void)_updateTableDataForExternalChange;
- (BOOL)_updatePeopleDataForExternalChange;
- (void)addressBookChangedLocally:(struct __CFDictionary *)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
@property(copy, nonatomic) NSString *attribution;
@property(retain, nonatomic) UIView *customFooterView;
@property(retain, nonatomic) UIView *customHeaderView;
@property(nonatomic) BOOL shouldAlignPersonHeaderViewToImage;
@property(retain, nonatomic) UIView *personHeaderView;
@property(readonly, nonatomic) UIView *tableHeaderView;
- (void)setCardContentProvider:(id)arg1;
@property(retain, nonatomic) UIView *customMessageView;
@property(retain, nonatomic) UIFont *messageDetailFont;
@property(copy, nonatomic) NSString *messageDetail;
@property(retain, nonatomic) UIFont *messageFont;
@property(copy, nonatomic) NSString *message;
@property(retain, nonatomic) ABUIPerson *displayedUIPerson;
@property(nonatomic) void *displayedPerson;
@property(nonatomic) void *addressBook;
@property(nonatomic) BOOL allowsSettingAsPreferredCardForName;
@property(nonatomic) BOOL allowsConferencing;
@property(nonatomic) BOOL allowsVibrations;
@property(nonatomic) BOOL allowsSounds;
@property(nonatomic) BOOL allowsCancel;
@property(nonatomic) BOOL allowsAddToFavorites;
@property(nonatomic) BOOL allowsSharing;
@property(nonatomic) BOOL allowsActions;
@property(nonatomic) BOOL allowsEditing;
@property(nonatomic) BOOL allowsDeletion;
@property(nonatomic) id <ABPersonEditDelegate> editDelegate;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2;
- (BOOL)manuallyLinkPerson:(id)arg1;
- (void)setShouldShowLinkingUIOnCard:(BOOL)arg1;
- (BOOL)shouldShowLinkingUIOnCard;
@property(nonatomic) BOOL appearsInLinkingPeoplePicker;
@property(nonatomic) BOOL shouldShowLinkedPeople;
- (void)updateRecord;
@property(readonly, nonatomic) AFContextManager *contextManager;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (void)helper:(id)arg1 didToggleEditingWhileInViewMode:(BOOL)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 saveChanges:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_editAnimationTimerFired:(id)arg1;
- (int)abViewControllerType;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)saveChanges;
- (BOOL)canHandleSnapbackIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)cancelEditing:(BOOL)arg1;
- (void)editCancel:(id)arg1;
- (void)updateNavigationButtons;
- (void)updateNavigationButtonsAnimated:(BOOL)arg1;
- (void)pickerCancel:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (BOOL)supportedInterfaceOrientation:(int)arg1;
- (BOOL)_allowsAutorotation;
@property(nonatomic) BOOL observesExternalChanges;
- (void)_handleLocalChange:(struct __CFDictionary *)arg1;
- (BOOL)handleExternalChange;
- (void)stopDelayingChangeNotificationsAndDeliverNow:(BOOL)arg1;
- (void)startDelayingChangeNotifications;
- (BOOL)isDelayingChangeNotifications;
- (void)helperDidReloadAfterChangingDisplayedPeople:(id)arg1;
@property(nonatomic) id <ABPersonViewControllerDelegate> personViewDelegate;
- (BOOL)isReadonly;
- (void)peoplePickerLinkButtonTapped;
- (void)updateTitle;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (void)_removeContextProviderOnMainThread;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
@property(readonly, nonatomic) ABPersonViewControllerHelper *helper;
- (id)initWithAddressBook:(void *)arg1;
- (id)initWithStyle:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3;
- (void)applicationWillTerminate:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void *)arg3 style:(int)arg4;
- (id)init;
- (void)setCustomAppearanceProvider:(id)arg1;
- (void)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (id)newActionButton;
- (void)setActionShouldPickHighlightedItem:(BOOL)arg1;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;

@end

