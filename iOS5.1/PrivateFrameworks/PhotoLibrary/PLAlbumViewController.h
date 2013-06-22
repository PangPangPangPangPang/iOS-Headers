/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLAlbumChangeObserver-Protocol.h"
#import "PLAlbumViewDataSource-Protocol.h"
#import "PLAlbumViewDelegate-Protocol.h"

@class NSObject<PLAssetContainer>, PLAlbumView, PLEmptyAlbumView;

@interface PLAlbumViewController : UIViewController <PLAlbumViewDataSource, PLAlbumViewDelegate, PLAlbumChangeObserver>
{
    struct NSObject *_album;
    PLEmptyAlbumView *_emptyAlbumView;
    int _currentFilter;
    BOOL _shouldReloadWhenBecomingVisible;
    id viewDidAppearCompletion;
}

@property(nonatomic) int currentFilter; // @synthesize currentFilter=_currentFilter;
@property(copy, nonatomic) id viewDidAppearCompletion; // @synthesize viewDidAppearCompletion;
- (void)albumViewPreheatImageData:(id)arg1 forImagesInRange:(struct _NSRange)arg2;
- (id)albumView:(id)arg1 textBadgeForPhotoAtIndex:(unsigned int)arg2;
- (void)albumView:(id)arg1 imageCount:(unsigned int *)arg2 videoCount:(unsigned int *)arg3 otherCount:(unsigned int *)arg4 pendingCount:(unsigned int *)arg5 importOperation:(int *)arg6;
- (id)albumView:(id)arg1 imageDataForPhotoAtIndex:(unsigned int)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (unsigned int)numberOfPhotosForAlbumView:(id)arg1;
- (void)albumDidChange:(id)arg1;
- (void)libraryDidChange:(id)arg1;
- (void)beginAddPhotosSession:(id)arg1;
- (unsigned int)filteredCount;
- (id)filteredItems;
@property(readonly, nonatomic) PLAlbumView *albumView;
- (id)contentScrollView;
@property(nonatomic, getter=isShowingEmptyAlbumView) BOOL showingEmptyAlbumView;
@property(readonly, nonatomic) NSObject<PLAssetContainer> *album;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)reloadData;
- (void)invalidateFilteredItems;
- (void)dealloc;
- (id)initWithAlbum:(struct NSObject *)arg1;
- (id)init;

@end
