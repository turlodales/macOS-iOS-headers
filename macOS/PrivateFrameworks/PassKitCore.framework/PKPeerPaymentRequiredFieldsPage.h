//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PKPeerPaymentRequiredFieldsPage : NSObject
{
    NSArray *_requiredFields;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic) NSArray *requiredFields; // @synthesize requiredFields=_requiredFields;
- (id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2;

@end

