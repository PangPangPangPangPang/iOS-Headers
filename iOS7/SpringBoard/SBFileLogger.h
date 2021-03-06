/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SBFileLogger : NSObject
{
    int _logLevel;
    id <SBFileLoggerDelegate> _delegate;
}

@property(readonly, nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
@property(nonatomic) id <SBFileLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)willBeginLoggingToPath:(id)arg1;
- (id)consoleFormat:(id)arg1 withArguments:(struct __va_list_tag [1])arg2;
- (id)fileFormat:(id)arg1 withArguments:(struct __va_list_tag [1])arg2;
- (void)reloadFromDefaults;
@property(readonly, nonatomic) int maxLogSize;
@property(readonly, nonatomic) int maxLogCount;
@property(readonly, nonatomic) _Bool includeConsole;
@property(readonly, nonatomic) NSString *logPath;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)dealloc;
- (id)init;

@end

