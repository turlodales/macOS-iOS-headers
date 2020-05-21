//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface TKDataSource : NSObject
{
    NSData *_data;
    const char *_ptr;
}

- (void).cxx_destruct;
@property(readonly) const char *ptr; // @synthesize ptr=_ptr;
@property(readonly) NSData *data;
- (id)fetchDataWithLength:(long long)arg1;
- (unsigned char)fetchByte;
- (BOOL)bytesSafeToRead:(long long)arg1;
@property(readonly) const char *end;
- (id)initWithData:(id)arg1;

@end

