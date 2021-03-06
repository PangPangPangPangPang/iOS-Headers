/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSFileManager.h"

@interface NSFileManager (NSFileManagerAdditions)
- (id)mf_makeUniqueFileInDirectory:(id)arg1;
- (BOOL)mf_makeCompletePath:(id)arg1 mode:(int)arg2;
- (BOOL)mf_canWriteToDirectoryAtPath:(id)arg1;
- (id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;
- (void)mf_deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3;
- (BOOL)mf_protectFileAtPath:(id)arg1 withClass:(int)arg2 error:(id *)arg3;
@end

