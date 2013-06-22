/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface EKParticipant : EKObject <NSCopying>
{
}

- (void *)ABRecordWithAddressBook:(void *)arg1;
- (BOOL)isEqualToParticipant:(id)arg1;
@property(readonly, nonatomic) NSURL *URL;
- (BOOL)isCurrentUser;
@property(readonly, nonatomic) int participantRole;
@property(readonly, nonatomic) int participantStatus;
@property(readonly, nonatomic) int participantType;
- (void)setExternalID:(id)arg1;
- (id)externalID;
- (void)setEmailAddress:(id)arg1;
- (id)emailAddress;
- (void)setName:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (id)UUID;
- (id)_persistentItem;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
