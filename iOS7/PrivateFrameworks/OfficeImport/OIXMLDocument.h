/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OIXMLNode.h>

@class NSString, OIXMLElement;

@interface OIXMLDocument : OIXMLNode
{
    OIXMLElement *_rootElement;
    NSString *_version;
    NSString *_encoding;
}

- (id)closingTagString;
- (id)contentString;
- (id)openingTagString;
- (id)XMLString;
- (id)createMutableXMLString;
- (id)description;
- (void)setCharacterEncoding:(id)arg1;
- (id)rootElement;
- (void)setRootElement:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRootElement:(id)arg1;

@end
