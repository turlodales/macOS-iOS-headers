//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKKeyPathExpressionValidator : CKPredicateValidatorInstance
{
    id <CKObjectValidating> _validator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <CKObjectValidating> validator; // @synthesize validator=_validator;
- (id)CKPropertiesDescription;
- (BOOL)validate:(id)arg1 error:(id *)arg2;
- (id)initWithValidator:(id)arg1;

@end

