/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VGLIconMesh, VGLRenderState, VGLTextMesh;

@interface VKLabelDisplayList : NSObject
{
    VGLTextMesh *_textMesh;
    VGLIconMesh *_iconUpperMesh;
    VGLIconMesh *_iconLowerMesh;
    VGLIconMesh *_roadSignMesh;
    BOOL _shouldStencil;
    VGLRenderState *_iconRenderState;
    VGLRenderState *_textRenderState;
}

- (void)purge;
- (void)drawWithContext:(id)arg1;
- (void)pushLabels:(const vector_51094ce7 *)arg1 roadSigns:(const vector_51094ce7 *)arg2 drawContext:(id)arg3 renderStamp:(unsigned int)arg4 snapToPixels:(BOOL)arg5 satImages:(BOOL)arg6;
- (void)setShouldStencil:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end
