//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSDate, NSDateFormatter, NSDictionary, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>, NSOrderedSet, NSString, PLMomentAnalyzerWorkThread;

@interface PLMomentAnalyzer : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    PLMomentAnalyzerWorkThread *_geoWorkThread;
    unsigned int _mode;
    double _analysisStartTime;
    BOOL _delayedSavePending;
    unsigned int _objectUpdatesSinceSave;
    NSMutableOrderedSet *_pendingGEORequests;
    NSMutableSet *_activeGEORequests;
    NSMutableSet *_processingMomentUuids;
    NSMutableSet *_megaMomentListIdsToProcess;
    NSMutableSet *_yearMomentListIdsToProcess;
    NSDateFormatter *_shortDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    id <PLMomentGenerationDataManagement> _momentDataManager;
    BOOL _analyzingAllMoments;
    BOOL _skippedMomentsDuringAnalysis;
    BOOL _passSuccess;
    unsigned int _errorState;
    int _errorBackoffLevel;
    int _triesAtCurrentBackoffLevel;
    BOOL _networkObservingReachability;
    BOOL _needToUpdateInvalidMomentsWhenPossible;
    NSDictionary *_homeAddressDictionary;
    CLLocation *_homeLocation;
    id <GEOMapItemPrivate> _homeMapItem;
    NSString *_languageAndLocale;
    NSString *_lastGeoProviderId;
    NSOrderedSet *_defaultDominantGeoOrderingForMoment;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMoment;
    NSOrderedSet *_defaultDominantGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultSecondaryLocationGeoOrderingForMegaMoment;
    NSOrderedSet *_defaultSecondaryGeoOrderingForYear;
    double _lastNetworkForcedAbortTime;
    double _timeToWaitBeforeNextRequest;
    double _lastRevGeoRequestTime;
    NSDate *_lastGeoVersionFileFetchDate;
    unsigned int _lastGeoVersionFileVersion;
    NSDictionary *_serverVersionInfo;
    double _lastServerVersionInfoFetchAttemptTime;
    unsigned int _currentRevGeoServerVersionNum;
    BOOL _pendingServerVersionInfoFetch;
    BOOL _addCountyIfNeeded;
    BOOL _noResultErrorIsSuccess;
    double _revGeoServerVersionInfoFetchNewVersionInterval;
    NSString *_revGeoServerVersionInfoURL;
    NSString *_currentProviderId;
    BOOL _momentAnalysisPaused;
    id <PLMomentGenerationDataManagement> _momentGenerationDataManager;
}

@property(nonatomic) id <PLMomentGenerationDataManagement> momentGenerationDataManager; // @synthesize momentGenerationDataManager=_momentGenerationDataManager;
- (void)resumeMomentAnalysis;
- (void)pauseMomentAnalysis;
- (void)_setMomentAnalysisPaused:(BOOL)arg1;
- (BOOL)updateInfoForMomentListWithMomentListId:(id)arg1;
- (BOOL)updateInfoForYearMomentLists:(id)arg1;
- (BOOL)updateInfoForMegaMomentLists:(id)arg1;
- (BOOL)updateInfoForMomentWithMomentId:(id)arg1 fromOnDemandRequest:(BOOL)arg2;
- (BOOL)updateInfoForMoments:(id)arg1 invalidOnly:(BOOL)arg2;
- (BOOL)_shouldProcessMoments:(id)arg1;
- (void)updateInfoForInvalidMomentsIfNeeded;
- (void)updateInfoForAllMoments;
- (void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(BOOL)arg1;
- (unsigned int)_errorTypeForError:(id)arg1;
- (BOOL)_isNetworkReachable;
- (void)_stopObservingReachabilityChanges;
- (void)_startObservingReachabilityChanges;
- (void)_networkReachabilityDidChange:(BOOL)arg1;
- (id)_userSuppliedTitlesForCountedSet:(id)arg1;
- (id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2 includeHome:(BOOL)arg3 outAddedHome:(char *)arg4;
- (id)_simpleNamesForNameInfoArray:(id)arg1;
- (id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned int)arg2 totalPlaceCount:(unsigned int)arg3 includeAllPlaces:(BOOL)arg4 includeHome:(BOOL)arg5 homeAtEnd:(BOOL)arg6 atLastLevel:(BOOL)arg7 outOtherNonDominantPlaces:(id)arg8;
- (BOOL)_markInvalidLowQualityAssetsInMoment:(id)arg1 withCurrentProviderId:(id)arg2;
- (void)_updateInfoForAllMomentsWithReAnalyzeType:(unsigned int)arg1;
- (BOOL)_canProcessMoments;
- (void)_setLocationDataValidForMomentId:(id)arg1;
- (unsigned int)_significantPlaceCountInMap:(id)arg1;
- (id)_resetAndSortedNameInfoArray:(id)arg1 homeAtEnd:(BOOL)arg2;
- (void)_updateSecondaryInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 primaryCompoundNameInfo:(id)arg3 defaultGeoOrderingSet:(id)arg4 dominantPlaces:(id)arg5 otherNonDominantPlaces:(id)arg6 ordersCheckedOrUsed:(id)arg7 dominantOrder:(unsigned int)arg8 usedHome:(BOOL)arg9;
- (id)_suffixForNameInfoArray:(id)arg1 afterOrderType:(unsigned int)arg2;
- (id)_updateDominantInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 defaultGeoOrderingSet:(id)arg3 includeAllPlaces:(BOOL)arg4 includeHome:(BOOL)arg5 homeAtEnd:(BOOL)arg6 outOtherNonDominantPlaces:(id)arg7 outOrdersCheckedOrUsed:(id)arg8 outOrderUsed:(unsigned int *)arg9 outUsedHome:(char *)arg10;
- (void)_updateAllInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoPlaces:(id)arg3 includeHome:(BOOL)arg4 primaryGeoOrderingSet:(id)arg5 secondaryGeoOrderingSet:(id)arg6;
- (void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2;
- (unsigned int)_indexForGeoOrder:(unsigned int)arg1 inPrioritySet:(id)arg2;
- (unsigned int)_geoOrderInPrioritySet:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_suffixForGeoPlace:(id)arg1 afterOrderType:(unsigned int)arg2 homePlace:(id)arg3;
- (id)_geoLocationForCoordinate:(CDStruct_c3b9c2ee)arg1 date:(id)arg2;
- (void)_reverseGeocodeMoment:(id)arg1 shouldFilterIfInProgress:(BOOL)arg2 invalidOnly:(BOOL)arg3;
- (void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(BOOL)arg2;
- (BOOL)_startingToProcessMomentWithUuid:(id)arg1;
- (void)_processYearMomentLists;
- (unsigned int)_processYearMomentList:(id)arg1;
- (void)_processMegaMomentLists;
- (unsigned int)_processMegaMomentList:(id)arg1;
- (void)_processPendingGEORequests;
- (void)_processNextTransaction;
- (void)_waitForReachability;
- (void)_processNextAnalysisTransaction;
- (void)_analysisDidComplete:(BOOL)arg1;
- (void)_analysisComplete;
- (void)_saveDataIfReachedObjectChangeThreshold;
- (void)_saveDataIfNeededAfterTimeDiff:(double)arg1;
- (void)_saveNow;
- (void)_processGEORequestWithRequestInfo:(id)arg1;
- (id)_compactPlaceDescriptionForMapItem:(id)arg1;
- (BOOL)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3;
- (void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(BOOL)arg3;
- (void)_addRevGeoPlacesAndUserTitlesFromAssets:(id)arg1 toPlacesArray:(id)arg2 toMomentTitles:(id)arg3 toCollectionTitles:(id)arg4;
- (void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1 shouldFilterIfInProgress:(BOOL)arg2;
- (void)_updateErrorStateWithSuccess:(BOOL)arg1 errorType:(unsigned int)arg2;
- (void)_finishedGEORequestInfo:(id)arg1 withSuccess:(BOOL)arg2 errorType:(unsigned int)arg3;
- (void)_setErrorState:(unsigned int)arg1;
- (void)_resetErrorState;
- (void)addressBookChanged;
- (void)_updateHomeLocation;
- (void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_runOnWorkQueueAferSeconds:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)_runBlockOnWorkQueue:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) id <PLMomentGenerationDataManagement> _momentDataManager;
@property(readonly, retain, nonatomic) CLLocation *_homeLocation;
- (void)_updateCurrentProviderIdWithCountryCode:(id)arg1;
- (void)_updateCurrentProviderId;
- (id)_currentProviderId;
- (void)_updateInformationForGeoProviderIfNeeded;
- (void)_updateInformationForGeoProviderIfNeededOnWorkQueue;
- (void)_countryCodeChanged:(id)arg1;
- (BOOL)_updateLanguageIfNeeded;
- (BOOL)_updateHomeAddressIfNeeded;
- (id)_locationFromDictionary:(id)arg1;
- (id)_dictionaryFromLocation:(id)arg1;
- (void)_saveGlobalMetadata;
- (void)_fetchServerVersionInfo;
- (void)_updateLocalServerVersionInfo:(id)arg1;
- (BOOL)_markInvalidOutOfDateAssetsInMoment:(id)arg1 forCurrentCountryVersionMap:(id)arg2 withCurrentProviderId:(id)arg3;
- (BOOL)_loadServerVersionInfo;
- (void)_updateDateFormattersForLocale:(id)arg1;
- (BOOL)setVersionInfoURLIfAvailable:(id)arg1;
- (void)_updateRevGeoServerFetchInfoConfig;
- (void)_finalizeInitOnWorkQueue;
- (id)init;
- (void)startAnalyzer;
- (void)_checkForNewServerVersionInfoIfNeeded;
- (void)dealloc;

@end

