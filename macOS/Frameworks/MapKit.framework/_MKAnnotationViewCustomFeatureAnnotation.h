//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "VKCustomFeatureAnnotation.h"

@class MKAnnotationView, NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface _MKAnnotationViewCustomFeatureAnnotation : NSObject <VKCustomFeatureAnnotation, NSSecureCoding>
{
    VKCustomFeature *_customFeature;
    MKAnnotationView *_annotationView;
    CDStruct_2c43369c _coordinate;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) VKCustomFeature *feature;
- (void)setCustomFeature:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

