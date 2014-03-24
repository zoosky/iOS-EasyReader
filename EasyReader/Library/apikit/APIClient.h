//
//  APIClient.h
//  APIKit API Client
//
//  Created by Joseph Lorich on 3/19/14.
//  Copyright (c) 2014 Joseph Lorich.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

#pragma mark - Block definitions

/// An APIKit request success block
typedef void (^APISuccessBlock)(id responseObject, NSInteger httpStatus);

/// An APIKit request failure block
typedef void (^APIFailureBlock)(id responseObject, NSInteger httpStatus, NSError *error);


#pragma mark - APIClient Interface

/**
 * A client interface to an API
 */
@interface APIClient : NSObject


#pragma mark - Class methods

/**
 * Returns a shared APIClient instance
 */
+ (APIClient *) shared;


#pragma mark - Instance methods

/**
 * Makes a request to a named route
 *
 * @param routeName The route name to use for this request
 * @param parameters The params to use in the API request
 * @param success The block to be executed on request success
 * @param failure The block to be executed on request failure
 */
- (void) requestRoute:(NSString*)routeName
           parameters:(NSDictionary *)parameters
              success:(APISuccessBlock)success
              failure:(APIFailureBlock)failure;

@end