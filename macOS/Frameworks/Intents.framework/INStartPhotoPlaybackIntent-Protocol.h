//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class CLPlacemark, INDateComponentsRange, NSArray, NSString;

@protocol INStartPhotoPlaybackIntent <NSObject, JSExport>
@property(copy) NSArray *peopleInPhoto;
@property unsigned long long excludedAttributes;
@property unsigned long long includedAttributes;
@property(copy) NSArray *searchTerms;
@property(copy) NSString *albumName;
@property(copy) CLPlacemark *locationCreated;
@property(copy) INDateComponentsRange *dateCreated;
@end

