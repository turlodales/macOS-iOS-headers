//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INImage, INPersonHandle, NSArray, NSPersonNameComponents, NSString;

@protocol INPersonExport <NSObject, JSExport>
@property(copy) NSArray *alternatives;
@property BOOL isMe;
@property long long suggestionType;
@property(copy) NSArray *aliases;
@property(copy) NSString *customIdentifier;
@property(copy) NSString *relationship;
@property(copy) NSString *contactIdentifier;
@property(copy) INImage *image;
@property(copy) NSString *displayName;
@property(copy) NSPersonNameComponents *nameComponents;
@property(copy) INPersonHandle *personHandle;
@property(copy) NSString *handle;
- (id)init;
@end

