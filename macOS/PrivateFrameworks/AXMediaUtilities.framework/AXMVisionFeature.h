//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXMJSONSerializable.h"
#import "NSSecureCoding.h"

@class AXMLanguage, AXMTaggedText, AXMVisionFeatureAestheticsResult, AXMVisionFeatureAssetMetadata, AXMVisionFeatureColorInfo, AXMVisionFeatureFaceDetectionResult, NSArray, NSDictionary, NSNumber, NSObject<NSSecureCoding>, NSString;

@interface AXMVisionFeature : NSObject <AXMJSONSerializable, NSSecureCoding>
{
    unsigned long long _featureType;
    NSArray *_subfeatures;
    NSString *_barcodeType;
    long long _ocrFeatureType;
    AXMLanguage *_textDetectionLanguage;
    double _creationDate;
    struct CGRect _frame;
    struct CGRect _normalizedFrame;
    NSString *_value;
    NSNumber *_isValueSpeakable;
    AXMTaggedText *_taggedText;
    AXMVisionFeatureColorInfo *_colorInfo;
    AXMVisionFeatureAssetMetadata *_assetMetadata;
    double _blur;
    double _brightness;
    double _confidence;
    struct CGAffineTransform _horizonTransform;
    float _horizonAngle;
    AXMVisionFeatureFaceDetectionResult *_faceDetectionResult;
    unsigned long long _faceId;
    // Error parsing type: {?="columns"[4]}, name: _facePose
    struct CGSize _canvasSize;
    NSString *_modelID;
    NSString *_classificationLabel;
    NSString *_classificationLocalizedValue;
    NSString *_caption;
    AXMVisionFeatureAestheticsResult *_aestheticsResult;
    long long _deviceOrientation;
    long long _cameraType;
    NSObject<NSSecureCoding> *_userContext;
    NSDictionary *_debugRectangles;
    struct CGRect _unpaddedDetectedFaceRect;
}

+ (id)flattenedFeatureList:(id)arg1;
+ (void)_append:(id)arg1 toList:(id)arg2;
+ (id)nameForOCRType:(long long)arg1;
+ (id)nameForFeatureType:(unsigned long long)arg1;
+ (long long)locationForNormalizedFrame:(struct CGRect)arg1 previousLocation:(long long)arg2 usingThirds:(BOOL)arg3;
+ (id)localizedStringForLocation:(long long)arg1 isSubjectImplicit:(BOOL)arg2;
+ (id)nameForLocation:(long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (struct CGRect)_aspectFaceRectFromSquareFaceRect:(struct CGRect)arg1 sizeInPixels:(struct CGSize)arg2;
+ (id)featureWithCameraType:(long long)arg1;
+ (id)featureWithAssetMetadata:(id)arg1;
+ (id)featureWithColorInfo:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)featureWithMediaLegibility:(id)arg1;
+ (id)featureWithIconClass:(id)arg1 confidence:(double)arg2;
+ (id)featureWithVisionRequest:(id)arg1 rectangleResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithCaptionResult:(id)arg1 confidence:(double)arg2 modelIdentifier:(id)arg3 canvasSize:(struct CGSize)arg4;
+ (id)featureWithVisionRequest:(id)arg1 modelClassificationResult:(id)arg2 modelIdentifier:(id)arg3 canvasSize:(struct CGSize)arg4;
+ (id)featureWithImageAestheticsObservation:(id)arg1;
+ (id)featureWithTaxonomyNode:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)sceneClassificationWithLabel:(id)arg1 localizedValue:(id)arg2 confidence:(float)arg3 canvasSize:(struct CGSize)arg4;
+ (id)objectClassificationWithLabel:(id)arg1 localizedValue:(id)arg2 boundingBox:(struct CGRect)arg3 confidence:(float)arg4 canvasSize:(struct CGSize)arg5;
+ (id)featureWithVisionRequest:(id)arg1 horizonResult:(id)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 brightnessValue:(float)arg2 canvasSize:(struct CGSize)arg3;
+ (id)featureWithVisionRequest:(id)arg1 blurValue:(float)arg2 canvasSize:(struct CGSize)arg3;
+ (id)personWithBoundingBox:(struct CGRect)arg1 confidence:(double)arg2 canvasSize:(struct CGSize)arg3;
+ (id)prominentObjectWithBoundingBox:(struct CGRect)arg1 canvasSize:(struct CGSize)arg2 confidence:(double)arg3;
+ (id)featureWithFaceDetectionResult:(id)arg1 canvasSize:(struct CGSize)arg2;
+ (id)featureWithVisionRequest:(id)arg1 recognizedTextResult:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)featureWithVisionRequest:(id)arg1 textResult:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)textLineWithBoundingBox:(struct CGRect)arg1 sequences:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)textRegionWithBoundingBox:(struct CGRect)arg1 lines:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)textDocumentWithBoundingBox:(struct CGRect)arg1 regions:(id)arg2 canvasSize:(struct CGSize)arg3 context:(id)arg4;
+ (id)featureWithMetadata:(id)arg1 interfaceOrientation:(long long)arg2 isMirrored:(BOOL)arg3 canvasSize:(struct CGSize)arg4;
+ (id)unitTestingHorizonFeature;
+ (id)unitTestingFaceFeatureWithSize:(struct CGSize)arg1 faceFrame:(struct CGRect)arg2;
+ (id)unitTestingProminentObjectFeature;
+ (id)unitTestingFaceFeature;
+ (id)unitTestingFeature;
+ (id)unitTestingFeatureWithType:(unsigned long long)arg1 canvasSize:(struct CGSize)arg2 frame:(struct CGRect)arg3 value:(id)arg4 barcodeType:(id)arg5 ocrFeatureType:(long long)arg6 subFeatures:(id)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *debugRectangles; // @synthesize debugRectangles=_debugRectangles;
@property(retain, nonatomic) NSObject<NSSecureCoding> *userContext; // @synthesize userContext=_userContext;
@property(readonly, nonatomic) long long cameraType; // @synthesize cameraType=_cameraType;
@property(readonly, nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(readonly, nonatomic) AXMVisionFeatureAestheticsResult *aestheticsResult; // @synthesize aestheticsResult=_aestheticsResult;
@property(readonly, nonatomic) struct CGRect unpaddedDetectedFaceRect; // @synthesize unpaddedDetectedFaceRect=_unpaddedDetectedFaceRect;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToAXMVisionFeature:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)_nameForOCRFeatureType:(long long)arg1;
@property(readonly, nonatomic) BOOL isImageAesthetics;
@property(readonly, nonatomic) BOOL isIconClass;
@property(readonly, nonatomic) BOOL isProminentObject;
@property(readonly, nonatomic) BOOL isCameraMetadata;
@property(readonly, nonatomic) BOOL isMotion;
@property(readonly, nonatomic) BOOL isTextDiacritic;
@property(readonly, nonatomic) BOOL isTextCharacter;
@property(readonly, nonatomic) BOOL isTextSequence;
@property(readonly, nonatomic) BOOL isTextLine;
@property(readonly, nonatomic) BOOL isTextRegion;
@property(readonly, nonatomic) BOOL isTextDocument;
@property(readonly, nonatomic) BOOL isOCR;
@property(readonly, nonatomic) BOOL isRectangle;
@property(readonly, nonatomic) BOOL isAssetMetadata;
@property(readonly, nonatomic) BOOL isMediaLegibility;
@property(readonly, nonatomic) BOOL isHorizon;
@property(readonly, nonatomic) BOOL isBlur;
@property(readonly, nonatomic) BOOL isBrightness;
@property(readonly, nonatomic) BOOL isColor;
@property(readonly, nonatomic) BOOL isCaption;
@property(readonly, nonatomic) BOOL isModelClassification;
@property(readonly, nonatomic) BOOL isObjectClassification;
@property(readonly, nonatomic) BOOL isSceneClassification;
@property(readonly, nonatomic) BOOL isPerson;
@property(readonly, nonatomic) BOOL isRealtimeFace;
@property(readonly, nonatomic) BOOL isFace;
@property(readonly, nonatomic) BOOL isBarcode;
- (BOOL)_isTextFeatureValueSpeakable;
@property(readonly, nonatomic) BOOL isValueSpeakable;
- (id)_valueForTextFeature;
@property(readonly, nonatomic) NSString *value;
- (long long)locationUsingThirds:(BOOL)arg1;
@property(readonly, nonatomic) NSString *caption;
@property(readonly, nonatomic) NSString *classificationLocalizedValue;
@property(readonly, nonatomic) NSString *classificationLabel;
@property(readonly, nonatomic) float horizonAngle;
@property(readonly, nonatomic) struct CGAffineTransform horizonTransform;
-     // Error parsing type: {?=[4]}16@0:8, name: facePose
@property(readonly, nonatomic) unsigned long long faceId;
@property(readonly, nonatomic) AXMVisionFeatureFaceDetectionResult *faceDetectionResult;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double blur;
@property(readonly, nonatomic) AXMVisionFeatureAssetMetadata *assetMetadata;
@property(readonly, nonatomic) AXMVisionFeatureColorInfo *colorInfo;
@property(readonly, nonatomic) AXMLanguage *textDetectionLanguage;
@property(readonly, nonatomic) long long ocrFeatureType;
@property(readonly, nonatomic) NSString *barcodeType;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) struct CGRect normalizedFrame;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) struct CGSize canvasSize;
@property(readonly, nonatomic) double creationDate;
@property(readonly, nonatomic) NSArray *subfeatures;
@property(readonly, nonatomic) unsigned long long featureType;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)_serializeWithCoder:(id)arg1 orDictionary:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
@property(readonly, nonatomic) AXMTaggedText *taggedText;

// Remaining properties
@property(readonly) Class superclass;

@end

