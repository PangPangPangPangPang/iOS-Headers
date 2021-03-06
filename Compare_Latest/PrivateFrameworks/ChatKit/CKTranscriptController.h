//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKScrollViewController.h>

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "ABPersonViewControllerDelegate.h"
#import "ABUnknownPersonViewControllerDelegate.h"
#import "AFContextProvider.h"
#import "CKCameraSheetViewControllerDelegate.h"
#import "CKComposeRecipientSelectionControllerDelegate.h"
#import "CKJoystickGestureRecognizerButtonDelegate.h"
#import "CKMessageEntryViewDelegate.h"
#import "CKTranscriptCollectionViewControllerDelegate.h"
#import "CKTrimControllerDelegate.h"
#import "CKVideoMessageRecordingViewControllerDelegate.h"
#import "IMChatSendProgressDelegate.h"
#import "QLPreviewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIKeyInput.h"
#import "UIModalViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class CKAudioTrimViewController, CKComposeRecipientSelectionController, CKComposition, CKConversation, CKGradientReferenceView, CKMessageEncodingInfo, CKMessageEntryView, CKPhotoPickerSheetViewController, CKQLPreviewController, CKRaiseGesture, CKScheduledUpdater, CKSendAnimationWindow, CKTranscriptCollectionViewController, CKTranscriptGroupHeaderView, CKTranscriptTypingIndicatorCell, CKVideoMessageRecordingViewController, CKVideoTrimController, NSArray, NSMutableArray, NSNotification, NSNumber, NSString, UIBarButtonItem, UIImagePickerController, UINavigationItem, UIProgressView, UITapGestureRecognizer, UIToolbar, UIView, UIWindow;

@interface CKTranscriptController : CKScrollViewController <CKVideoMessageRecordingViewControllerDelegate, CKCameraSheetViewControllerDelegate, UIViewControllerTransitioningDelegate, CKJoystickGestureRecognizerButtonDelegate, UIAlertViewDelegate, ABPeoplePickerNavigationControllerDelegate, CKTranscriptCollectionViewControllerDelegate, CKComposeRecipientSelectionControllerDelegate, CKMessageEntryViewDelegate, IMChatSendProgressDelegate, CKTrimControllerDelegate, UIActionSheetDelegate, UIModalViewDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate, UINavigationControllerDelegate, AFContextProvider, UIKeyInput, QLPreviewControllerDelegate>
{
    CKConversation *_conversation;
    UINavigationItem *_navItem;
    CKGradientReferenceView *_backPlacard;
    CKMessageEntryView *_entryView;
    id <CKTranscriptComposeDelegate> _composeDelegate;
    CKTranscriptTypingIndicatorCell *_typingIndicatorForSendAnimation;
    CDUnknownBlockType _scrollBlock;
    NSArray *_newCompositionAddresses;
    NSString *_serviceAvailabilityKey;
    CKComposition *_newComposition;
    CKMessageEncodingInfo *_textMessageEncodingInfo;
    CKAudioTrimViewController *_audioTrimController;
    CKVideoTrimController *_videoTrimController;
    int _storedStatusBarStyle;
    int _setupState;
    BOOL _dimmed;
    UITapGestureRecognizer *_loggingTapGestureRecognizer;
    CDUnknownBlockType _alertViewHandler;
    UIWindow *_autorotateDisabledWindow;
    float _sendProgress;
    unsigned int _sendProgressSendCount;
    unsigned int _sendProgressTotalCount;
    BOOL _progressColor;
    unsigned int _locked:1;
    unsigned int _viewNeedsSetup:1;
    unsigned int _newRecipient:1;
    unsigned int _sending:1;
    unsigned int _transitioningToTranscript:1;
    unsigned int _entryViewCanAcceptFocus:1;
    unsigned int _isAnimatingMessageSend:1;
    unsigned int _entryViewWasActiveBeforeEdit:1;
    unsigned int _entryViewWasActiveBeforePushingViewController:1;
    unsigned int _entryViewWasActiveBeforeNewComposeThrow:1;
    unsigned int _entryViewWasActiveBeforeSwitchingConversations:1;
    unsigned int _recipientSelectionViewWasActiveBeforeFirstResponderChange:1;
    unsigned int _automaticKeyboardWasDisabled:1;
    unsigned int _togglingEditing:1;
    unsigned int _keyboardUndocked:1;
    unsigned int _suspendScrollDueToMediaViewing:1;
    unsigned int _triedToResetEntryViewSizeWhileNotInAWindow:1;
    unsigned int _triedToResetOverlayViewSizeWhileNotInAWindow:1;
    unsigned int _preparingForResume:1;
    unsigned int _settingConversation:1;
    unsigned int _needsTransitionToFullTranscript:1;
    unsigned int _transcriptNeedsUpdate;
    unsigned int _storedStatusBarIsHidden:1;
    UIToolbar *_actionsToolbar;
    BOOL _canSafelyDismissImagePicker;
    NSNotification *_keyboardNotification;
    BOOL _showingKeyboard;
    BOOL _didCancel;
    NSString *_initialSystemKeyboardID;
    UIImagePickerController *_mediaController;
    CKQLPreviewController *_previewController;
    BOOL _safeToMarkAsRead;
    BOOL _showingVideoMessageRecordingView;
    CKPhotoPickerSheetViewController *_photoPickerController;
    BOOL _showingPhotoPicker;
    BOOL _hasPrepopulatedRecipients;
    BOOL _programaticallyMadeEntryViewActive;
    BOOL _hideEntryViewForModalDismissal;
    BOOL _visible;
    CKComposition *_presetComposition;
    CKVideoMessageRecordingViewController *_videoMessageRecordingViewController;
    CKTranscriptCollectionViewController *_collectionViewController;
    NSArray *_newCompositionRecipients;
    CKComposeRecipientSelectionController *_composeRecipientSelectionController;
    CKTranscriptGroupHeaderView *_groupHeaderView;
    CKScheduledUpdater *_typingUpdater;
    CKComposition *_compositionBeingTrimmed;
    UIView *_throwAnimationEnforcementView;
    UIView *_throwAnimationSnapshotView;
    NSMutableArray *_throwBalloonViews;
    NSMutableArray *_throwIntermediateFrames;
    NSMutableArray *_throwEndFrames;
    CKSendAnimationWindow *_sendAnimationWindow;
    UIProgressView *_progressBar;
    UIBarButtonItem *_detailsButton;
    UIBarButtonItem *_clearAllItem;
    UIBarButtonItem *_editCancelItem;
    UIBarButtonItem *_composeCancelItem;
    CKRaiseGesture *_raiseGesture;
    CKScheduledUpdater *_refreshServiceForSendingUpdater;
}

+ (id)readerScrollPositionCache;
@property(retain, nonatomic) CKScheduledUpdater *refreshServiceForSendingUpdater; // @synthesize refreshServiceForSendingUpdater=_refreshServiceForSendingUpdater;
@property(retain, nonatomic) CKRaiseGesture *raiseGesture; // @synthesize raiseGesture=_raiseGesture;
@property(retain, nonatomic) UIBarButtonItem *composeCancelItem; // @synthesize composeCancelItem=_composeCancelItem;
@property(retain, nonatomic) UIBarButtonItem *editCancelItem; // @synthesize editCancelItem=_editCancelItem;
@property(retain, nonatomic) UIBarButtonItem *clearAllItem; // @synthesize clearAllItem=_clearAllItem;
@property(retain, nonatomic) UIBarButtonItem *detailsButton; // @synthesize detailsButton=_detailsButton;
@property(retain, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) CKSendAnimationWindow *sendAnimationWindow; // @synthesize sendAnimationWindow=_sendAnimationWindow;
@property(retain, nonatomic) NSMutableArray *throwEndFrames; // @synthesize throwEndFrames=_throwEndFrames;
@property(retain, nonatomic) NSMutableArray *throwIntermediateFrames; // @synthesize throwIntermediateFrames=_throwIntermediateFrames;
@property(retain, nonatomic) NSMutableArray *throwBalloonViews; // @synthesize throwBalloonViews=_throwBalloonViews;
@property(retain, nonatomic) UIView *throwAnimationSnapshotView; // @synthesize throwAnimationSnapshotView=_throwAnimationSnapshotView;
@property(retain, nonatomic) UIView *throwAnimationEnforcementView; // @synthesize throwAnimationEnforcementView=_throwAnimationEnforcementView;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(retain, nonatomic) CKComposition *compositionBeingTrimmed; // @synthesize compositionBeingTrimmed=_compositionBeingTrimmed;
@property(retain, nonatomic) CKScheduledUpdater *typingUpdater; // @synthesize typingUpdater=_typingUpdater;
@property(retain, nonatomic) CKTranscriptGroupHeaderView *groupHeaderView; // @synthesize groupHeaderView=_groupHeaderView;
@property(readonly, retain, nonatomic) CKComposeRecipientSelectionController *composeRecipientSelectionController; // @synthesize composeRecipientSelectionController=_composeRecipientSelectionController;
@property(nonatomic) BOOL hideEntryViewForModalDismissal; // @synthesize hideEntryViewForModalDismissal=_hideEntryViewForModalDismissal;
@property(nonatomic) BOOL programaticallyMadeEntryViewActive; // @synthesize programaticallyMadeEntryViewActive=_programaticallyMadeEntryViewActive;
@property(nonatomic) BOOL hasPrepopulatedRecipients; // @synthesize hasPrepopulatedRecipients=_hasPrepopulatedRecipients;
@property(copy, nonatomic) NSArray *newCompositionRecipients; // @synthesize newCompositionRecipients=_newCompositionRecipients;
@property(retain, nonatomic) CKTranscriptCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(retain, nonatomic) CKVideoMessageRecordingViewController *videoMessageRecordingViewController; // @synthesize videoMessageRecordingViewController=_videoMessageRecordingViewController;
@property(retain, nonatomic) CKComposition *presetComposition; // @synthesize presetComposition=_presetComposition;
@property(retain, nonatomic) CKMessageEntryView *entryView; // @synthesize entryView=_entryView;
@property(nonatomic) BOOL safeToMarkAsRead; // @synthesize safeToMarkAsRead=_safeToMarkAsRead;
@property(copy, nonatomic) NSArray *newCompositionAddresses; // @synthesize newCompositionAddresses=_newCompositionAddresses;
@property(copy, nonatomic) CDUnknownBlockType alertHandler; // @synthesize alertHandler=_alertViewHandler;
@property(copy, nonatomic) CDUnknownBlockType scrollBlock; // @synthesize scrollBlock=_scrollBlock;
@property(nonatomic, getter=isDimmed) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) id <CKTranscriptComposeDelegate> composeDelegate; // @synthesize composeDelegate=_composeDelegate;
- (BOOL)_shouldUseExistingConversations;
- (void)showPopoverWithContentViewController:(id)arg1 withPresenter:(CDUnknownBlockType)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)_alertView:(id)arg1 externalButtonTitleForMainScreenButtonTitle:(id)arg2 atIndex:(int)arg3;
@property(nonatomic) NSNumber *canSafelyDismissImagePicker;
- (struct CGRect)gradientFrameWithInsets:(struct UIEdgeInsets)arg1;
- (BOOL)isEditable;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (BOOL)becomeFirstResponder;
- (id)inputAccessoryView;
- (BOOL)canBecomeFirstResponder;
- (void)showKeyboardForReply;
- (void)_resetEntryViewSize;
- (struct CGSize)_idealSizeForEntryView;
- (void)makeEntryViewActiveAfterSend;
- (void)willDismissModally;
- (void)disableCameraAttachments;
- (BOOL)photoButtonEnabled;
- (void)reloadEntryViewIfNeeded;
- (id)_fieldForFocus;
- (void)_makeFieldForFocusActive;
- (void)_makeRecipientEntryViewActive;
- (BOOL)_makeContentEntryViewActive;
- (void)_updateActionsToolbarItems;
- (id)_actionsToolbar;
- (void)_setVisible:(BOOL)arg1;
- (BOOL)_isVisible;
- (BOOL)shouldDismissAfterSend;
- (BOOL)_isGroupMessage;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (void)chat:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned int)arg4 totalCount:(unsigned int)arg5 finished:(BOOL)arg6;
- (void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2;
- (struct UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)_setEntryViewVisible:(BOOL)arg1;
- (id)navigationItem;
- (void)showAddToExistingContactViewForEntity:(id)arg1;
- (void *)_newPersonWithValue:(struct __CFString *)arg1 forMultiValueProperty:(int)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)dismissPeoplePicker:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void *)arg3;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void *)arg2 insertProperty:(int *)arg3 copyInsertValue:(id *)arg4 copyInsertLabel:(id *)arg5;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3;
- (BOOL)personViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3;
- (BOOL)sharedShouldPresentMessageCompositionWithVCard:(id)arg1 filename:(id)arg2;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)_displayABPersonViewController:(id)arg1;
- (id)_abPersonViewControllerForPerson:(void *)arg1 property:(int)arg2 withIdentifier:(int)arg3;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_actuallyClearCurrentMessageThread;
- (BOOL)hasUnreachableEmergencyRecipient;
- (BOOL)hasFailedRecipients;
- (BOOL)isComposingRecipient;
- (void)setNewRecipient:(BOOL)arg1;
- (BOOL)isNewRecipient;
- (void)setupForNewRecipient;
- (void)_refreshViewForNewRecipientIfNeeded;
- (void)setNewComposition:(id)arg1 addresses:(id)arg2;
- (void)setNewComposition:(id)arg1 composeRecipients:(id)arg2;
- (id)unatomizedRecipientText;
- (id)proposedRecipients;
- (id)recipients;
- (void)setComposition:(id)arg1;
- (void)clearComposition;
- (id)composition;
- (BOOL)_resizeMessageEntryView:(id)arg1 animate:(BOOL)arg2;
- (BOOL)_resizeMessageEntryViewWithAnimate:(BOOL)arg1;
- (BOOL)getContainerWidth:(float *)arg1 offset:(float *)arg2;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)updateTyping;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (BOOL)messageEntryViewShouldBeginEditing:(id)arg1;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (void)sendComposition:(id)arg1;
- (void)trimController:(id)arg1 didFinishTrimmingMediaObject:(id)arg2 withReplacementMediaObject:(id)arg3;
- (void)trimControllerDidCancel:(id)arg1;
- (void)presentTrimControllerForMediaObject:(id)arg1;
- (void)startTrimmingMediaObjectsInComposition:(id)arg1;
- (id)nextMediaObjectToTrimInComposition:(id)arg1;
- (BOOL)_mediaObjectNeedsTrimming:(id)arg1;
- (void)_startCreatingNewMessageForSending:(id)arg1;
- (void)scrollToMessage:(id)arg1 highlight:(BOOL)arg2;
- (void)_highlightMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)clearCurrentMessageThread;
- (void)refreshTranscriptWithAnimation:(BOOL)arg1;
- (void)refreshTranscriptIfNeededWithAnimation:(BOOL)arg1;
- (void)_cancelMessageSendAnimation;
- (void)_finishSendAnimation;
- (void)_cleanupThrowData;
- (void)startSendAnimationForMessage:(id)arg1 shouldClearEntryComposition:(BOOL)arg2;
- (void)transitionFromNewMessageToConversation;
- (void)_endTransitioningToTranscript;
- (void)_beginTransitioningToTranscript;
- (struct CGPoint)_transcriptScrollToBottomOffsetWithHeightDelta:(float)arg1;
- (void)_setupTranscriptTableHeader;
- (void)updateRaiseGesture;
- (void)raiseGestureRecognized:(id)arg1;
- (void)clearButtonClicked:(id)arg1;
- (void)_detailsButtonPressed:(id)arg1;
- (void)_editCancelButtonPressed:(id)arg1;
- (void)_forwardSelectedMessages:(id)arg1;
- (void)_deleteSelectedMessages:(id)arg1;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)cancelButtonClicked:(id)arg1;
- (void)updateNavigationButtons;
- (BOOL)wantsFullScreenLayout;
- (void)updateTitle;
- (void)_setupViewForConversation;
- (void)setSendingMessage:(BOOL)arg1;
- (BOOL)isSendingMessage;
- (void)_setEntryViewSize:(struct CGSize)arg1 animate:(BOOL)arg2 animationLength:(float)arg3;
- (void)_resetGroupHeaderPosition;
- (void)_setupTranscriptGroupHeader;
- (void)_removeRecipientSelectionView;
- (void)_setupRecipientSelectionView;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (void)_conversationParticipantsChanged:(id)arg1;
- (void)_refreshActiveChat:(id)arg1;
- (void)_refreshServiceForSending;
- (void)refreshServiceForSending;
- (id)chat;
- (id)conversation;
- (void)setConversation:(id)arg1;
- (void)deregisterSendProgressDelegate;
- (void)registerSendProgressDelegate;
- (void)_setConversation:(id)arg1;
- (void)_refreshViewForCurrentConversationIfNeeded;
- (void)scrollBubbleIndexToVisible:(int)arg1;
- (struct CGPoint)bestVisibleOffsetForBubbleAtIndex:(int)arg1;
- (void)_receivedConversationDisplayNameDidChangeNotification:(id)arg1;
- (void)_receivedConversationDowngradeStateChangedNotification:(id)arg1;
- (void)_receivedConversationPreferredServiceChangedNotification:(id)arg1;
- (void)_raiseToListenSettingChanged:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)_transferFinished:(id)arg1;
- (void)_transferRestored:(id)arg1;
- (void)significantTimeChange;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)systemApplicationWillEnterForeground;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)prepareForResume;
- (void)didReceiveMemoryWarning;
- (void)prepareForSuspend;
- (void)_performResume:(BOOL)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)_screenLocked:(id)arg1;
- (void)parentControllerDidBecomeActive;
- (void)_applicationBecameActive:(id)arg1;
- (void)registerForNotifications;
- (void)registerForSharedNotifications;
- (void)_askToTurnOnSMSRelayIfNeeded;
- (void)_confirmReadReceiptSettings;
- (void)_askToTurnOnReadReceiptsIfNeeded;
- (BOOL)_shouldShowReadRecieptAlert;
- (void)_markMessagesAsReadIfNecessary;
- (void)_updateBackPlacardSubviews;
- (id)rotatingFooterView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)shouldAutorotate;
- (id)textInputContextIdentifier;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)setupScrollingForKeyboardInteraction;
- (void)keyboardVisibilityWillChange;
- (void)keyboardWillHideViaGesture;
- (void)contentInsetDidChange;
- (void)contentInsetWillChange:(struct UIEdgeInsets)arg1 animated:(BOOL)arg2 duration:(float)arg3;
- (float)bottomInsetPadding;
- (float)topInsetPadding;
- (BOOL)topInsetIncludesPalette;
- (id)scrollView;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)_saveDraftState;
- (void)viewDidAppearDeferredSetup;
- (void)performResumeDeferredSetup;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (int)preferredStatusBarStyle;
- (BOOL)_canReloadView;
- (void)viewWillUnload;
- (void)loadView;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;
- (id)init;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (void)previewController:(id)arg1 didTransitionToState:(int)arg2;
- (void)previewController:(id)arg1 willTransitionToState:(int)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
- (void)_showCurrentPreviewItemForPreviewController:(id)arg1;
- (void)_hideCurrentPreviewItemForPreviewController:(id)arg1;
- (BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (void)readerViewControllerWillDismiss:(id)arg1;
- (id)_supportedMediaTypesForPhotoPicker;
- (void)_showVCalViewerForMediaObject:(id)arg1;
- (void)_showVCardViewerForMediaObject:(id)arg1;
- (void)_showMapViewerForMediaObject:(id)arg1;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (void)_showPassbookCardViewForMediaObject:(id)arg1;
- (void)showViewerForMediaObject:(id)arg1;
- (void)dismissPresentedViewController:(id)arg1;
- (void)showReaderForPart:(id)arg1;
- (BOOL)_displayPreviewItemForMediaObject:(id)arg1;
- (void)updateQLPreviewControllerIfVisible;
- (id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(int *)arg2 containsRestoring:(char *)arg3;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)ckPhotoPickerViewController:(id)arg1 resizeToSize:(struct CGSize)arg2;
- (void)hideMediaPickerAnimated:(BOOL)arg1;
- (void)showMediaPicker:(id)arg1 animated:(BOOL)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)_userDidCaptureImage;
- (void)_userDidCancelCapturingImage;
- (void)_showPhotoPickerWithSourceType:(int)arg1;
- (void)ckPhotoPickerViewController:(id)arg1 selectedAssets:(id)arg2 shouldSend:(BOOL)arg3;
- (void)ckPhotoPickerViewControllerCancel:(id)arg1;
- (void)ckPhotoPickerViewControllerProceedToChooseExisting:(id)arg1;
- (void)ckPhotoPickerViewControllerProceedToTakeAPicture:(id)arg1;
- (void)_transitionFromCKPhotoPickerSheet:(id)arg1 toImagePickerWithSourceType:(int)arg2;
- (void)dismissPhotoPickerViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentPhotoPickerViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showPhotosPicker;
- (void)_showMediaSourceSelectionSheet;
- (void)addMedia:(id)arg1;
- (BOOL)_shouldAllowCameraAttachments;
- (void)dismissVideoMessageRecordingViewController;
- (void)ckVideoMessageRecordingViewController:(id)arg1 mediaObjectCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoMessageRecordingViewControllerRecordingCanceled:(id)arg1;
- (void)joystickGestureRecognizerButtonGestureDidEnd:(id)arg1;
- (void)joystickGestureRecognizerButtonGestureDidBegin:(id)arg1;
- (BOOL)joystickGestureRecognizerButtonShouldRecognizeGesture:(id)arg1;
- (BOOL)joystickGestureRecognizerButtonIsShowingHint:(id)arg1;
- (void)joystickGestureRecognizerButtonShowHint:(id)arg1;
- (BOOL)joystickGestureRecognizerButtonShouldShowHint:(id)arg1;
- (void)joystickGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1;
- (void)joystickGestureRecognizerButtonDidTouchDownButton:(id)arg1;
- (void)prewarmCamera:(id)arg1;
- (void)_setupMediaEntry;
- (void)_entryDebugShowEntryHUD;
- (void)entryDebugSliderChange:(id)arg1;
- (void)entryDebugClear;

// Remaining properties
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int spellCheckingType;
@property(readonly) Class superclass;

@end

