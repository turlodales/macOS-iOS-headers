//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseFolderType.h>

@class EWSCalendarPermissionSetType;

@interface EWSCalendarFolderType : EWSBaseFolderType
{
    EWSCalendarPermissionSetType *_PermissionSet;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) EWSCalendarPermissionSetType *PermissionSet; // @synthesize PermissionSet=_PermissionSet;

@end

