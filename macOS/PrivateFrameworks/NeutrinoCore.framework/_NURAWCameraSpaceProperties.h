//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface _NURAWCameraSpaceProperties : NSObject
{
    NSArray *_xyzToCamera1;
    NSArray *_xyzToCamera2;
    double _whiteValue;
    double _whiteFactor;
}

- (void).cxx_destruct;
@property double whiteFactor; // @synthesize whiteFactor=_whiteFactor;
@property double whiteValue; // @synthesize whiteValue=_whiteValue;
@property(retain) NSArray *xyzToCamera2; // @synthesize xyzToCamera2=_xyzToCamera2;
@property(retain) NSArray *xyzToCamera1; // @synthesize xyzToCamera1=_xyzToCamera1;
- (id)description;

@end

