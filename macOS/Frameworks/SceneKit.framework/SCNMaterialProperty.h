//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SCNAnimatable.h"

@class NSArray, NSColor, NSMutableDictionary, NSString, SCNOrderedDictionary;

@interface SCNMaterialProperty : NSObject <SCNAnimatable, NSSecureCoding>
{
    unsigned int _isPresentationInstance:1;
    unsigned int _isCommonProfileProperty:1;
    unsigned int _sRGB:1;
    unsigned int _preventWarmup:1;
    BOOL _propertyType;
    id _parent;
    NSString *_customSlotName;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSColor *_borderColor;
    id _contents;
    unsigned char _contentType;
    long long _mappingChannel;
    unsigned char _minificationFilter;
    unsigned char _magnificationFilter;
    unsigned char _mipFilter;
    unsigned char _wrapS;
    unsigned char _wrapT;
    unsigned char _textureComponents;
    float _intensity;
    float _maxAnisotropy;
    // Error parsing type: ^{__C3DEffectSlot={__CFRuntimeBase=QAQ}{C3DColor4=(?=[4f]{?=ffff})}^v(?=^{__C3DImage}^v^{__C3DImageProxy}^{__C3DTexture})b8b1b1b1b4c^{__C3DTextureSampler}^(C3DMatrix4x4)fi^v}, name: _customSlot
    struct __C3DImage *_c3dImage;
    struct CATransform3D *_contentTransform;
    id _runtimeResolvedPath;
}

+ (BOOL)supportsSecureCoding;
+ (id)captureDeviceOutputConsumerWithOptions:(id)arg1;
+ (id)captureDeviceOutputConsumer;
+ (id)copyImageFromC3DImage:(struct __C3DImage *)arg1;
+ (id)_copyImageFromC3DImage:(struct __C3DImage *)arg1;
+ (struct __C3DImage *)copyC3DImageFromImage:(id)arg1;
+ (struct __C3DImage *)copyC3DImageFromImage:(id)arg1 textureOptions:(int)arg2;
+ (struct __C3DImage *)copyC3DImageFromImage:(id)arg1 textureOptions:(int)arg2 wasCached:(char *)arg3;
+ (struct __C3DImage *)_copyC3DImageFromImageData:(id)arg1 typeID:(unsigned long long)arg2;
+ (id)dvt_supportedTypesForPropertyContents;
+ (id)materialPropertyWithContents:(id)arg1;
+ (id)SCNUID_enumForProperty:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_hasDefaultValues;
- (void)_customDecodingOfSCNMaterialProperty:(id)arg1;
- (void)_didDecodeSCNMaterialProperty:(id)arg1;
- (void)_customEncodingOfSCNMaterialProperty:(id)arg1;
- (void)_updateMaterialColor:(id)arg1;
- (void)_updateMaterialNumber:(id)arg1;
- (void)_updateMaterialImage:(id)arg1;
- (void)_updateMaterialProceduralContents:(id)arg1;
- (void)_updateMaterialTextureProvider:(id)arg1;
- (void)_updateMaterialCaptureDeviceOutputConsumerSource:(id)arg1;
- (void)_updateMaterialCaptureDevice:(id)arg1;
- (void)_updateMaterialAVPlayer:(id)arg1;
- (void)_updateMaterialLayer:(id)arg1;
- (void)_updateMaterialSKTexture:(id)arg1;
- (void)_updateMaterialMTLTexture:(id)arg1;
- (void)_updateMaterialSKScene:(id)arg1;
- (void)_skSceneDidChange:(id)arg1;
- (void)_layerDidChange:(id)arg1;
- (void)_updateMaterialAttachment:(id)arg1;
-     // Error parsing type: v80@0:8(C3DMatrix4x4=[16f][4]{?=[4]})16, name: _updateMaterialPropertyTransform:
- (void)_updateMaterialFilters;
- (void)_updateMaterialBorderColor:(id)arg1;
- (BOOL)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationMaterialProperty;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyPropertiesFrom:(id)arg1;
- (void)_syncObjCModel;
- (struct __C3DScene *)sceneRef;
- (void)removeAllBindings;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
-     // Error parsing type: ^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}16@0:8, name: textureSampler
-     // Error parsing type: ^{__C3DEffectCommonProfile={__CFRuntimeBase=QAQ}^{__C3DMaterial}i^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}fffffCqBBb1b1b1b1b1b1b1b1b1b13}16@0:8, name: commonProfile
-     // Error parsing type: ^{__C3DEffectSlot={__CFRuntimeBase=QAQ}{C3DColor4=(?=[4f]{?=ffff})}^v(?=^{__C3DImage}^v^{__C3DImageProxy}^{__C3DTexture})b8b1b1b1b4c^{__C3DTextureSampler}^(C3DMatrix4x4)fi^v}16@0:8, name: effectSlot
- (id)parent;
- (void)parentWillDie:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)propertyType;
- (id)slotName;
- (id)propertyName;
@property(nonatomic) struct CATransform3D contentsTransform;
- (id)mtlTexture;
- (void)setMtlTexture:(id)arg1;
- (id)proceduralContents;
- (void)setProceduralContents:(id)arg1;
@property(nonatomic) double maxAnisotropy;
- (id)content;
- (void)setContent:(id)arg1;
- (void)_setImagePath:(id)arg1 withResolvedPath:(id)arg2;
@property(retain, nonatomic) id contents;
- (id)textureProvider;
- (void)setTextureProvider:(id)arg1;
- (id)captureDeviceOutputConsumerSource;
- (void)setCaptureDeviceOutputConsumerSource:(id)arg1;
- (id)captureDevice;
- (void)setCaptureDevice:(id)arg1;
- (id)avPlayer;
- (void)setAvPlayer:(id)arg1;
- (id)layer;
- (void)setLayer:(id)arg1;
- (id)skTexture;
- (void)setSkTexture:(id)arg1;
- (id)skScene;
- (void)setSkScene:(id)arg1;
- (id)pvrtcData;
- (id)image;
- (void)setImage:(id)arg1;
- (void)_updateC3DImageWithContents:(id)arg1;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (int)_textureOptions;
- (void)setSRGBTexture:(BOOL)arg1;
- (BOOL)sRGBTexture;
@property(nonatomic) long long wrapT;
@property(nonatomic) long long wrapS;
- (void)setBorderColor:(id)arg1;
- (id)borderColor;
@property(nonatomic) double intensity;
@property(nonatomic) long long textureComponents;
@property(nonatomic) long long mappingChannel;
- (long long)_presentationMappingChannel;
@property(nonatomic) long long mipFilter;
@property(nonatomic) long long magnificationFilter;
@property(nonatomic) long long minificationFilter;
- (struct C3DColor4)borderColor4;
- (struct C3DColor4)color4;
- (void *)getC3DImageRef;
- (void)_setupContentsFromC3DImage;
- (void)_setC3DImageRef:(struct __C3DImage *)arg1;
- (id)floatValue;
- (void)setFloatValue:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void)_setColor:(id)arg1;
- (void)_clearContents;
- (id)_animationPathForKey:(id)arg1;
-     // Error parsing type: ^{__C3DEffectSlot={__CFRuntimeBase=QAQ}{C3DColor4=(?=[4f]{?=ffff})}^v(?=^{__C3DImage}^v^{__C3DImageProxy}^{__C3DTexture})b8b1b1b1b4c^{__C3DTextureSampler}^(C3DMatrix4x4)fi^v}20@0:8c16, name: effectSlotCreateIfNeeded:
- (void)linkCustomPropertyWithParent:(id)arg1 andCustomName:(id)arg2;
- (void)unlinkCustomPropertyWithParent:(id)arg1;
- (void)_setParent:(id)arg1;
- (id)__runtimeResolvedPath;
- (void)dealloc;
- (void)__allocateContentTransformIfNeeded;
- (id)initPresentationMaterialPropertyWithModelProperty:(id)arg1;
- (id)initWithParent:(id)arg1 andCustomName:(id)arg2;
- (id)initWithParent:(id)arg1 propertyType:(BOOL)arg2;
- (id)init;
- (id)SCNUI_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

