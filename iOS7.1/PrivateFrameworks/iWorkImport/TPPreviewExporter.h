//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TPRenderingExporter.h>

#import "TSKImageExporter.h"

__attribute__((visibility("hidden")))
@interface TPPreviewExporter : TPRenderingExporter <TSKImageExporter>
{
}

@property(nonatomic) BOOL scaleToFit;
@property(nonatomic) unsigned int height;
@property(nonatomic) unsigned int width;
- (id)p_renderingExporterDelegate;

@end

