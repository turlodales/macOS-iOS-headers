//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _INPBFileProperty, _INPBString;

@protocol _INPBGetFileInformationIntentResponse <NSObject>
@property(nonatomic) BOOL hasSuccess;
@property(nonatomic) BOOL success;
@property(readonly, nonatomic) BOOL hasProperty;
@property(retain, nonatomic) _INPBFileProperty *property;
@property(readonly, nonatomic) BOOL hasEntityName;
@property(retain, nonatomic) _INPBString *entityName;
@end

