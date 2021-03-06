/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@interface GEOTrafficSegment : PBCodable
{
    int _vertexOffset;
    int _vertexCount;
    BOOL _hasSpeed;
    int _speed;
    BOOL _hasWidth;
    int _width;
}

@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) BOOL hasWidth; // @synthesize hasWidth=_hasWidth;
@property(nonatomic) BOOL hasSpeed; // @synthesize hasSpeed=_hasSpeed;
@property(nonatomic) int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) int vertexOffset; // @synthesize vertexOffset=_vertexOffset;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) int speed; // @synthesize speed=_speed;
- (void)dealloc;

@end

