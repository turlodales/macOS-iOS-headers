//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SCNAnimatable.h"
#import "SCNShadable.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SCNMaterialProperty, SCNOrderedDictionary, SCNProgram, SCNShadableHelper;

@interface SCNMaterial : NSObject <SCNAnimatable, SCNShadable, NSCopying, NSSecureCoding>
{
    struct __C3DMaterial *_material;
    SCNMaterialProperty *_ambient;
    SCNMaterialProperty *_diffuse;
    SCNMaterialProperty *_specular;
    SCNMaterialProperty *_emission;
    SCNMaterialProperty *_reflective;
    SCNMaterialProperty *_transparent;
    SCNMaterialProperty *_multiply;
    SCNMaterialProperty *_normal;
    SCNMaterialProperty *_ambientOcclusion;
    SCNMaterialProperty *_selfIllumination;
    SCNMaterialProperty *_metalness;
    SCNMaterialProperty *_roughness;
    SCNMaterialProperty *_displacement;
    SCNMaterialProperty *_clearCoat;
    SCNMaterialProperty *_clearCoatRoughness;
    SCNMaterialProperty *_clearCoatNormal;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    NSMutableDictionary *_valuesForUndefinedKeys;
    float _shininess;
    float _transparency;
    float _indexOfRefraction;
    float _fresnelExponent;
    float _selfIlluminationOcclusion;
    long long _transparencyMode;
    NSString *_lightingModelName;
    long long _cullMode;
    SCNShadableHelper *_shadableHelper;
    BOOL _isPresentationInstance;
    BOOL _litPerPixel;
    BOOL _doubleSided;
    BOOL _locksAmbientWithDiffuse;
    BOOL _avoidsOverLighting;
    BOOL _writesToDepthBuffer;
    BOOL _readsFromDepthBuffer;
    unsigned long long _fillMode;
    long long _blendMode;
    long long _colorBufferWriteMask;
}

+ (BOOL)supportsSecureCoding;
+ (id)materialNamed:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)materialWithContents:(id)arg1;
+ (id)materialWithColor:(id)arg1;
+ (id)material;
+ (id)materialWithMaterialRef:(struct __C3DMaterial *)arg1;
+ (id)materialWithMDLMaterial:(id)arg1;
+ (id)SCNUID_additionalProperties;
+ (BOOL)SCNUID_rangeForFloatProperty:(id)arg1 min:(double *)arg2 max:(double *)arg3;
+ (id)SCNUID_constantToStringForProperty:(id)arg1;
+ (id)SCNUID_enumForProperty:(id)arg1;
+ (id)SCNUID_propertyOrdering;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customEncodingOfSCNMaterial:(id)arg1;
- (void)_customDecodingOfSCNMaterial:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(retain, nonatomic) SCNProgram *program;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)shaderModifiersArgumentsNames;
@property(copy, nonatomic) NSDictionary *shaderModifiers;
- (void)copyShaderModifiersFrom:(id)arg1;
- (id)__shadableHelper;
- (void)_setupShadableHelperIfNeeded;
- (id)customMaterialAttributes;
- (id)customMaterialAttributeNames;
- (id)customMaterialProperties;
- (id)customMaterialPropertyNames;
- (void)_shadableSetValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (struct __C3DMaterial *)materialRefCreateIfNeeded;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_copyAttributes:(id)arg1;
- (void)_setAttributes:(id)arg1;
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
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fillMode;
@property(nonatomic) long long cullMode;
- (BOOL)doubleSided;
@property(nonatomic, getter=isDoubleSided) BOOL doubleSided;
- (void)setContent:(id)arg1;
- (id)content;
- (void)setContents:(id)arg1;
- (id)contents;
@property(nonatomic) BOOL readsFromDepthBuffer;
@property(nonatomic) long long colorBufferWriteMask;
@property(nonatomic) BOOL writesToDepthBuffer;
- (BOOL)avoidsOverLighting;
- (void)setAvoidsOverLighting:(BOOL)arg1;
@property(nonatomic) BOOL locksAmbientWithDiffuse;
- (BOOL)litPerPixel;
@property(nonatomic, getter=isLitPerPixel) BOOL litPerPixel;
@property(copy, nonatomic) NSString *lightingModelName;
@property(nonatomic) long long blendMode;
- (double)selfIlluminationOcclusion;
- (void)setSelfIlluminationOcclusion:(double)arg1;
@property(nonatomic) double fresnelExponent;
- (double)indexOfRefraction;
- (void)setIndexOfRefraction:(double)arg1;
@property(nonatomic) double transparency;
@property(nonatomic) double shininess;
@property(nonatomic) long long transparencyMode;
@property(readonly, nonatomic) SCNMaterialProperty *clearCoatNormal;
@property(readonly, nonatomic) SCNMaterialProperty *clearCoatRoughness;
@property(readonly, nonatomic) SCNMaterialProperty *clearCoat;
@property(readonly, nonatomic) SCNMaterialProperty *displacement;
@property(readonly, nonatomic) SCNMaterialProperty *roughness;
@property(readonly, nonatomic) SCNMaterialProperty *metalness;
@property(readonly, nonatomic) SCNMaterialProperty *selfIllumination;
@property(readonly, nonatomic) SCNMaterialProperty *ambientOcclusion;
@property(readonly, nonatomic) SCNMaterialProperty *normal;
@property(readonly, nonatomic) SCNMaterialProperty *multiply;
@property(readonly, nonatomic) SCNMaterialProperty *transparent;
@property(readonly, nonatomic) SCNMaterialProperty *reflective;
@property(readonly, nonatomic) SCNMaterialProperty *emission;
@property(readonly, nonatomic) SCNMaterialProperty *specular;
@property(readonly, nonatomic) SCNMaterialProperty *diffuse;
@property(readonly, nonatomic) SCNMaterialProperty *ambient;
- (id)_property:(id *)arg1;
- (id)properties;
- (id)builtinProperties;
- (id)color;
- (void)setColor:(id)arg1;
- (void)_setupMaterialProperty:(id *)arg1;
- (Class)_materialPropertyClass;
-     // Error parsing type: ^{__C3DEffectCommonProfile={__CFRuntimeBase=QAQ}^{__C3DMaterial}i^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}^{__C3DEffectSlot}fffffCqBBb1b1b1b1b1b1b1b1b1b13}16@0:8, name: commonProfile
- (struct __C3DMaterial *)materialRef;
- (BOOL)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationMaterial;
- (void)_syncObjCModel;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
- (void)dealloc;
- (id)initPresentationMaterialWithMaterialRef:(struct __C3DMaterial *)arg1;
- (id)initWithMaterialRef:(struct __C3DMaterial *)arg1;
- (id)init;
- (id)_integrateModelKitComputedMaps:(id)arg1 withGeometry:(id)arg2 node:(id)arg3 texturePathProvider:(CDUnknownBlockType)arg4 vertexAttributeNamed:(id)arg5 materialPropertyNamed:(id)arg6 filePath:(id)arg7;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

