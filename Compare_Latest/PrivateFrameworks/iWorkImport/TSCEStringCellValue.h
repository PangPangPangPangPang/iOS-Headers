/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCECellValue.h>

// Not exported
@interface TSCEStringCellValue : TSCECellValue
{
    struct TSCEStringValue *mStringValue;
}

- (void)encodeToArchive:(struct StringCellValueArchive *)arg1;
- (id)initWithArchive:(const struct StringCellValueArchive *)arg1;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_95e644ef)formatStruct;
- (struct TSCEStringValue *)stringValue;
- (void)dealloc;
- (id)initWithStringValue:(struct TSCEStringValue *)arg1;
- (id)initWithString:(id)arg1;

@end
