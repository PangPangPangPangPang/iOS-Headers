/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ACDAuthenticationHandlerQueueManager, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ACDAuthenticationPluginManager : NSObject
{
    ACDAuthenticationHandlerQueueManager *_handlerManager;
    NSMutableDictionary *_authenticationPluginsByType;
    NSObject<OS_dispatch_queue> *_authenticationPluginQueue;
}

- (void).cxx_destruct;
- (id)_descriptionForRenewalResult:(long long)arg1;
- (id)_authCapableParentAccountForAccount:(id)arg1;
- (id)_authenticationTypeForAccount:(id)arg1;
- (id)_pluginForAuthenticationType:(id)arg1;
- (void)_handleRenewalCompletionResult:(long long)arg1 forAccount:(id)arg2 renewalID:(id)arg3 accountStore:(id)arg4 error:(id)arg5;
- (void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(id)arg4;
- (void)_handleVerificationCompletionForAccount:(id)arg1 verifiedAccount:(id)arg2 error:(id)arg3 store:(id)arg4 shouldSave:(_Bool)arg5;
- (void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 saveWhenAuthorized:(_Bool)arg3 handler:(id)arg4;
- (void)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 handler:(id)arg4;
- (_Bool)isPushSupportedForAccount:(id)arg1;
- (id)init;

@end

