//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFContactsSearchConsumer.h"

@class MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber, NSString;

@interface AAUIContactsSearchController : NSObject <MFContactsSearchConsumer>
{
    MFContactsSearchManager *_searchManager;
    MFContactsSearchResultsModel *_searchResultsModel;
    int _countOfPendingResultBatches;
    BOOL _didFindResults;
    NSNumber *_searchTaskID;
    id <AAUIContactsSearchDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(unsigned int)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned int)arg2 taskID:(id)arg3;
- (void)_endSearch;
- (void)_cancelSearchAndNotify:(BOOL)arg1;
- (void)cancelSearch;
- (void)beginSearchWithString:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

