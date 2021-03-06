//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>

@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying>
{
    NSString *_nameSpace;
    NSString *_name;
    NUVersion *_version;
}

+ (id)validNameRegularExpression;
+ (BOOL)validateName:(id)arg1 error:(out id *)arg2;
+ (id)validNameSpaceRegularExpression;
+ (BOOL)validateNameSpace:(id)arg1 error:(out id *)arg2;
+ (id)identifierRegularExpression;
+ (BOOL)validateIdentifierString:(id)arg1 space:(out id *)arg2 name:(out id *)arg3 version:(out id *)arg4 error:(out id *)arg5;
+ (BOOL)validateIdentifierString:(id)arg1 error:(out id *)arg2;
+ (id)identifierWithString:(id)arg1 error:(out id *)arg2;
+ (id)latestIdentifierWithNameSpace:(id)arg1 name:(id)arg2;
+ (id)latestIdentifierWithName:(id)arg1;
+ (id)defaultNameSpace;
- (void).cxx_destruct;
@property(readonly) NUVersion *version; // @synthesize version=_version;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)identifierWithVersion:(id)arg1;
@property(readonly) NSString *stringRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithNameSpace:(id)arg1 name:(id)arg2 version:(id)arg3;
- (id)initWithName:(id)arg1 version:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

