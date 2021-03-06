//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAlbumProtocol.h"
#import "PLIndexMappingCache.h"

@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSObject<PLAlbumProtocol>, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PLShuffledAlbum : NSObject <PLIndexMappingCache, PLAlbumProtocol>
{
    struct __CFArray *_toBackingMap;
    struct __CFArray *_fromBackingMap;
    struct NSObject *_backingAlbum;
    PLManagedAsset *_startingAsset;
    NSMutableOrderedSet *_assets;
}

+ (struct NSObject *)unshuffledAlbum:(struct NSObject *)arg1;
+ (struct NSObject *)shuffledAlbum:(struct NSObject *)arg1 startingAsset:(id)arg2;
@property(retain, nonatomic) NSMutableOrderedSet *_assets; // @synthesize _assets;
- (void)batchFetchAssets:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) BOOL canShowAvalancheStacks;
@property(readonly, nonatomic) BOOL canShowComments;
@property(readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isUserLibraryAlbum;
@property(readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property(readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isInTrash;
@property(readonly, nonatomic) BOOL isFolder;
@property(readonly, nonatomic) BOOL isStandInAlbum;
@property(readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isWallpaperAlbum;
@property(readonly, nonatomic) BOOL isPanoramasAlbum;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
@property(readonly, retain, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, copy, nonatomic) NSString *name;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
@property(nonatomic) int pendingItemsType;
@property(nonatomic) int pendingItemsCount;
@property(nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) BOOL isEmpty;
- (unsigned int)count;
@property(readonly, nonatomic) unsigned int assetsCount;
@property(readonly, nonatomic) unsigned int approximateCount;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, retain, nonatomic) NSOrderedSet *assets;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, nonatomic) int kindValue;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(readonly, retain, nonatomic) NSString *uuid;
- (void)dealloc;
- (id)init;
@property(readonly, retain, nonatomic) PLManagedAsset *startingAsset;
@property(readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *backingAlbum;
- (id)initWithBackingAlbum:(struct NSObject *)arg1 startingAsset:(id)arg2;
@property(readonly, copy) NSString *description;
- (Class)derivedChangeNotificationClass;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> cachedIndexMapState;
- (void)createShuffledIndexesMaps;
- (void)createShuffledIndexesMapsIfNeeded;
- (struct __CFArray *)fromBackingMap;
- (void)replaceObjectInShuffledAssetsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromShuffledAssetsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inShuffledAssetsAtIndex:(unsigned int)arg2;
- (id)objectInShuffledAssetsAtIndex:(unsigned int)arg1;
- (unsigned int)indexInShuffledAssetsOfObject:(id)arg1;
- (unsigned int)countOfShuffledAssets;

// Remaining properties
@property(nonatomic) unsigned int batchSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly) unsigned int hash;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;

@end

