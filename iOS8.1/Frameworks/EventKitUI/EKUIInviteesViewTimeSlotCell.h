//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSDate, NSDictionary, NSLayoutConstraint, NSMutableDictionary, UIButton, UIColor, UIImageView, UILabel, UITapGestureRecognizer, UITextView, UIView;

@interface EKUIInviteesViewTimeSlotCell : UITableViewCell
{
    BOOL _checked;
    BOOL _updateFontBasedConstraints;
    BOOL _updateTimeText;
    BOOL _updateParticipantsText;
    BOOL _showAllParticipants;
    CDUnknownBlockType _showPreviewOfEventAtTime;
    CDUnknownBlockType _showAllConflictedParticipantsTapped;
    NSDictionary *_andMoreStringCache;
    UILabel *_labelForTextSizeTesting;
    UITextView *_textViewForTextSizeTesting;
    UILabel *_topTimeLabel;
    UILabel *_bottomTimeLabel;
    UIView *_andMoreDebugOverlay;
    UITextView *_participantsTextView;
    UIImageView *_checkmarkImageView;
    UIButton *_showPreviewButton;
    NSArray *_persistentConstraints;
    NSMutableDictionary *_colorToBusyImageAttributedString;
    NSLayoutConstraint *_topTimeLabelToTopContentViewConstraint;
    NSLayoutConstraint *_bottomTimeLabelToTopTimeLabelConstraint;
    NSLayoutConstraint *_participantsViewToBottomTimeLabelConstraint;
    NSLayoutConstraint *_participantsViewToContentViewConstraint;
    NSLayoutConstraint *_topTimeLabelHeightConstraint;
    NSLayoutConstraint *_bottomTimeLabelHeightConstraint;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_busyParticipants;
    UITapGestureRecognizer *_tappedMoreRecognizer;
    struct CGRect _andMoreBoundingRect;
}

+ (void)_setRequiredHuggingAndCompression:(id)arg1;
+ (id)_generateParticipantTextView;
+ (id)_andMoreLeftSpacing;
+ (id)_interParticipantSpacing;
+ (id)_nonBreakingSpace;
+ (id)_replaceSpacesWithNonBreakingSpaces:(id)arg1;
+ (id)_generateAndMoreStringWithCount:(unsigned int)arg1 attributes:(id)arg2;
+ (BOOL)_layoutManagerReportsExcessLines:(id)arg1;
+ (float)_rightBuffer;
+ (float)_leftBuffer;
+ (id)_participantsTextViewFont;
+ (id)_timeLabelFont;
@property(nonatomic) struct CGRect andMoreBoundingRect; // @synthesize andMoreBoundingRect=_andMoreBoundingRect;
@property(retain, nonatomic) UITapGestureRecognizer *tappedMoreRecognizer; // @synthesize tappedMoreRecognizer=_tappedMoreRecognizer;
@property(retain, nonatomic) NSArray *busyParticipants; // @synthesize busyParticipants=_busyParticipants;
@property(nonatomic) BOOL showAllParticipants; // @synthesize showAllParticipants=_showAllParticipants;
@property(nonatomic) BOOL updateParticipantsText; // @synthesize updateParticipantsText=_updateParticipantsText;
@property(nonatomic) BOOL updateTimeText; // @synthesize updateTimeText=_updateTimeText;
@property(nonatomic) BOOL updateFontBasedConstraints; // @synthesize updateFontBasedConstraints=_updateFontBasedConstraints;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSLayoutConstraint *bottomTimeLabelHeightConstraint; // @synthesize bottomTimeLabelHeightConstraint=_bottomTimeLabelHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topTimeLabelHeightConstraint; // @synthesize topTimeLabelHeightConstraint=_topTimeLabelHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *participantsViewToContentViewConstraint; // @synthesize participantsViewToContentViewConstraint=_participantsViewToContentViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *participantsViewToBottomTimeLabelConstraint; // @synthesize participantsViewToBottomTimeLabelConstraint=_participantsViewToBottomTimeLabelConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomTimeLabelToTopTimeLabelConstraint; // @synthesize bottomTimeLabelToTopTimeLabelConstraint=_bottomTimeLabelToTopTimeLabelConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topTimeLabelToTopContentViewConstraint; // @synthesize topTimeLabelToTopContentViewConstraint=_topTimeLabelToTopContentViewConstraint;
@property(retain, nonatomic) NSMutableDictionary *colorToBusyImageAttributedString; // @synthesize colorToBusyImageAttributedString=_colorToBusyImageAttributedString;
@property(retain, nonatomic) NSArray *persistentConstraints; // @synthesize persistentConstraints=_persistentConstraints;
@property(retain, nonatomic) UIButton *showPreviewButton; // @synthesize showPreviewButton=_showPreviewButton;
@property(retain, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(retain, nonatomic) UITextView *participantsTextView; // @synthesize participantsTextView=_participantsTextView;
@property(retain, nonatomic) UIView *andMoreDebugOverlay; // @synthesize andMoreDebugOverlay=_andMoreDebugOverlay;
@property(retain, nonatomic) UILabel *bottomTimeLabel; // @synthesize bottomTimeLabel=_bottomTimeLabel;
@property(retain, nonatomic) UILabel *topTimeLabel; // @synthesize topTimeLabel=_topTimeLabel;
@property(retain, nonatomic) UITextView *textViewForTextSizeTesting; // @synthesize textViewForTextSizeTesting=_textViewForTextSizeTesting;
@property(retain, nonatomic) UILabel *labelForTextSizeTesting; // @synthesize labelForTextSizeTesting=_labelForTextSizeTesting;
@property(retain, nonatomic) NSDictionary *andMoreStringCache; // @synthesize andMoreStringCache=_andMoreStringCache;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
@property(copy, nonatomic) CDUnknownBlockType showAllConflictedParticipantsTapped; // @synthesize showAllConflictedParticipantsTapped=_showAllConflictedParticipantsTapped;
@property(copy, nonatomic) CDUnknownBlockType showPreviewOfEventAtTime; // @synthesize showPreviewOfEventAtTime=_showPreviewOfEventAtTime;
- (void).cxx_destruct;
- (BOOL)_everyoneCanAttend;
- (BOOL)_textWillFit:(id)arg1;
- (id)_busyImageAttributedStringForColor:(id)arg1;
- (id)_textForParticipant:(id)arg1 color:(id)arg2;
- (id)_generateStringForSomeParticipantsAndStampMoreBoundingRect:(id)arg1;
- (id)_generateStringForAllParticipants:(id)arg1;
- (void)_resetParticipantsTextIfNeeded;
- (void)_resetTimeTextIfNeeded;
- (void)_resetPreferredMaxLayoutWidths;
- (void)_resetFonts;
- (float)_preferredMaxLayoutWidth;
- (void)_andMoreTapped:(id)arg1;
- (void)_showPreviewButtonTapped:(id)arg1;
@property(readonly, nonatomic) UIColor *timeTextColor;
@property(readonly, nonatomic) UIColor *participantsTextColor;
- (void)updateWithStartDate:(id)arg1 endDate:(id)arg2 busyParticipants:(id)arg3 showAllParticipants:(BOOL)arg4 checked:(BOOL)arg5;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateConstraints;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

