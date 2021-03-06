/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreThemeDefinition/TDElementProduction.h>

@class NSString;

@interface TDSimpleArtworkElementProduction : TDElementProduction
{
    struct CGRect _alignmentRect;
}

- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2;
- (void)awakeFromFetch;
@property(nonatomic) struct CGRect alignmentRect; // @dynamic alignmentRect;
@property(nonatomic) struct CGRect primitiveAlignmentRect;

// Remaining properties
@property(retain, nonatomic) NSString *alignmentRectString; // @dynamic alignmentRectString;

@end

