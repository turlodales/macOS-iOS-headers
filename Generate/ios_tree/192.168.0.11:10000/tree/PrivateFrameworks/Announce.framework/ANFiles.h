/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Announce.framework/Announce
 */

@interface ANFiles : NSObject

+ (id)createTemporaryFileWithData:(id)arg1 extension:(unsigned long long)arg2 directory:(id)arg3;
+ (id)createTemporaryURLWithExtension:(unsigned long long)arg1 directory:(id)arg2;
+ (void)purgeTemporarySubDirectory:(id)arg1;
+ (void)removeItem:(id)arg1;
+ (id)shared;
+ (id)stringForFileExtension:(unsigned long long)arg1;
+ (id)temporaryDirectoryUrl;

- (id)createDirectory:(id)arg1 andFileURLWithExtension:(unsigned long long)arg2;
- (id)createTemporaryFileWithData:(id)arg1 extension:(unsigned long long)arg2 directory:(id)arg3;
- (id)createTemporaryURLWithExtension:(unsigned long long)arg1 directory:(id)arg2;
- (void)purgeTemporarySubDirectory:(id)arg1;
- (void)removeDirectoryIfEmpty:(id)arg1;
- (void)removeItem:(id)arg1;

@end
