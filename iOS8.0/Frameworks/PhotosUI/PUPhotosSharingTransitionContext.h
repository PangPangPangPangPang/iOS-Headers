//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@interface PUPhotosSharingTransitionContext : NSObject
{
    id <PHAssetCollectionDataSource> _assetCollectionsDataSource;
    NSIndexPath *_keyAssetIndexPath;
}

@property(retain, nonatomic) NSIndexPath *keyAssetIndexPath; // @synthesize keyAssetIndexPath=_keyAssetIndexPath;
@property(retain, nonatomic) id <PHAssetCollectionDataSource> assetCollectionsDataSource; // @synthesize assetCollectionsDataSource=_assetCollectionsDataSource;
- (void).cxx_destruct;

@end

