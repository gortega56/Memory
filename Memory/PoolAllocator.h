#pragma once

namespace cliqCity
{
	namespace memory
	{
		class PoolAllocator
		{
		public:
			typedef PoolAllocator Node;

			PoolAllocator(void* start, void* end, size_t elementSize);
			void* Allocate();
			void  Free(void* pointer);

		private:
			Node* mNext;
		};
	}
}