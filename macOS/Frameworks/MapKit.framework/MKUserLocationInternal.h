//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLHeading, CLLocation, NSString;

__attribute__((visibility("hidden")))
@interface MKUserLocationInternal : NSObject
{
    CLLocation *fixedLocation;
    CLLocation *predictedLocation;
    CLHeading *heading;
    NSString *title;
    NSString *subtitle;
    id <MKAnnotationPrivate> _annotation;
    double timestamp;
    BOOL updating;
    double course;
    id <MKAnnotationPrivate> annotation;
}

- (void).cxx_destruct;
@property(nonatomic) double course; // @synthesize course;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) double timestamp; // @synthesize timestamp;
@property(readonly, nonatomic) id <MKAnnotationPrivate> annotation; // @synthesize annotation;
@property(retain, nonatomic) CLHeading *heading; // @synthesize heading;
@property(retain, nonatomic) CLLocation *predictedLocation; // @synthesize predictedLocation;
@property(retain, nonatomic) CLLocation *fixedLocation; // @synthesize fixedLocation;
@property(nonatomic, getter=isUpdating) BOOL updating; // @synthesize updating;

@end

