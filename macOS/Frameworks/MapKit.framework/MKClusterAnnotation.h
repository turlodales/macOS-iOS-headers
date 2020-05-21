//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class NSArray, NSString;

@interface MKClusterAnnotation : NSObject <MKAnnotation>
{
    NSArray *_memberAnnotations;
    NSString *_clusteringIdentifier;
    struct CLLocationCoordinate2D __coordinate;
    NSString *__title;
    NSString *__subtitle;
    CDStruct_81fb2dc1 _flags;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *clusteringIdentifier; // @synthesize clusteringIdentifier=_clusteringIdentifier;
@property(readonly, nonatomic) NSArray *memberAnnotations; // @synthesize memberAnnotations=_memberAnnotations;
- (BOOL)isEqual:(id)arg1;
- (struct CLLocationCoordinate2D)_averageCoordinate;
- (BOOL)_isMKClusterAnnotation;
@property(readonly) unsigned long long hash;
- (void)_memberAnnotationCoordinateDidChange;
- (id)initWithMemberAnnotations:(id)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=__coordinate;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=__subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=__title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

